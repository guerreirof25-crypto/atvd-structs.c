#include<stdio.h>
#include<math.h>
struct ponto{
    int x;
    int y;
};

struct ponto preenche(void){
    struct ponto p;
    printf("digite a coordenada x: ");
    scanf("%d",&p.x);
    printf("digite a coordenada y: ");
    scanf("%d",&p.y);
    return p;
}

void vetor(struct ponto v[],int n){
    for(int i=0;i<n;i++){
        v[i]=preenche();
    }
}

struct ponto distancia(struct ponto v[],int n){
    double ml=-1;
    struct ponto max=v[0];
    for(int j=0;j<n;j++){
        double dist=sqrt(pow(v[j].x,2)+pow(v[j].y,2));
        if (dist>ml){
            ml=dist;
            max=v[j];
        }
    }
    return max;
}

int main(void){
    struct ponto vet[10];
    vetor(vet,10);
    struct ponto dist=distancia(vet,10);
    printf("ponto mais distante da origem: (%d,%d)",dist.x,dist.y);
    return 0;
}
