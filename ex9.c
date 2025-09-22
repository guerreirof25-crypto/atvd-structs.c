#include<stdio.h>

struct ponto{
    int x;
    int y;
};

struct personagem{
    int id;
    struct ponto pos;
    int pontuacao;
};


struct personagem preencheb(void){
    struct personagem p;
    printf("digite a id: ");
    scanf("%d",&p.id);
    printf("digite a pontuação: ");
    scanf("%d",&p.pontuacao);
    printf("digite a coordenada x: ");
    scanf("%d",&p.pos.x);
    printf("digite a coordenada y: ");
    scanf("%d",&p.pos.y);
    return p;
}

    
void vetor(struct personagem p[],int n){
    for(int i=0;i<n;i++){
        p[i]=preencheb();
    }
}

void exibe(struct personagem p[], int n ){
    for(int i=0;i<n;i++){
        printf("\n======================\n");
        printf("personagem: %d\n", i+1);
        printf("id: %d\n", p[i].id);
        printf("posição: (%d,%d)\n",p[i].pos.x,p[i].pos.y);
        printf("pontuação: %d\n", p[i].pontuacao);
        printf("======================");
    }
}

int main(){
    struct personagem p[10];
    vetor(p,10);
    exibe(p,10);
    return 0;
}
