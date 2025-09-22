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

void posicao(struct personagem p[],int n){
    int LC[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            LC[i][j]=-1;
        }
    }
    for(int k=0;k<10;k++){
        LC[p[k].pos.x][p[k].pos.y]=p[k].id;
    }
    printf("   ");
    for(int j=0;j<10;j++){
        printf("%d  ", j);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d  ", i);
        for(int j=0;j<10;j++){
            if(LC[i][j]==-1){
                printf(".  ");
            }else{
                printf("%d  " ,LC[i][j]);
            }
        }printf("\n");
    }
}



int main(){
    struct personagem p[10];
    vetor(p,10);
    posicao(p,10);
    return 0;
}
