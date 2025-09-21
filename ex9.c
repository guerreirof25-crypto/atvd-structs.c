#include <stdio.h>

struct ponto {
    int x;
    int y;
};

struct personagem {
    int id;
    struct ponto pos;
    int pontuacao;
};

int main(void) {
    struct personagem p[10];

    for (int i = 0; i < 10; i++) {
        printf("digite a id: ");
        scanf("%d", &p[i].id);

        printf("digite a posição (x y): ");
        scanf("%d %d", &p[i].pos.x, &p[i].pos.y);

        printf("digite a pontuação: ");
        scanf("%d", &p[i].pontuacao);
    }

    return 0;
}
