#include <stdio.h>

#define N 10
#define TAM 10

struct ponto {
    int x;
    int y;
};

struct personagem {
    int id;
    struct ponto pos;
    int pontuacao;
};

struct ponto lePonto(void) {
    struct ponto p;
    printf("Digite a posição (x y): ");
    scanf("%d %d", &p.x, &p.y);
    return p;
}

struct personagem lePersonagem(void) {
    struct personagem p;
    printf("Digite a id: ");
    scanf("%d", &p.id);
    p.pos = lePonto();
    printf("Digite a pontuação: ");
    scanf("%d", &p.pontuacao);
    return p;
}

void desenhaMapa(struct personagem vet[], int n) {
    printf("\n   ");
    for (int x = 0; x < TAM; x++) printf("%d ", x);
    printf("\n\n");
    for (int y = 0; y < TAM; y++) {
        printf("%d  ", y);
        for (int x = 0; x < TAM; x++) {
            char c = ' ';
            for (int k = 0; k < n; k++) {
                if (vet[k].pos.x == x && vet[k].pos.y == y) {
                    c = '0' + (vet[k].id % 10);
                    break;
                }
            }
            printf("%c ", c);
        }
        printf("\n");
    }
}

int main(void) {
    struct personagem p[N];
    for (int i = 0; i < N; i++) {
        printf("\n--- Personagem %d ---\n", i + 1);
        p[i] = lePersonagem();
    }
    desenhaMapa(p, N);
    return 0;
}