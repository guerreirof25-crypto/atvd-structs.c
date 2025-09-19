#include <stdio.h>
struct personagem{
    int forca;
    int energia;
    int experiencia;
};
void preencheB(struct personagem*p){
    printf("digite a força: ");
    scanf("%d",&p->forca);
    printf("digite a energia: ");
    scanf("%d",&p->energia);
    printf("digite a experiência: ");
    scanf("%d",&p->experiencia);
}
void main(void) {
    struct personagem p1;
    preencheB(&p1);
    struct personagem p2;
    preencheB(&p2);
    printf("(%d,%d,%d) vs (%d,%d,%d)\n",p1.forca,p1.energia,p1.experiencia,p2.forca,p2.energia,p2.experiencia);
}
