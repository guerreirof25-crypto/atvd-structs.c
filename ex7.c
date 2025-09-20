#include<stdio.h>
#include<string.h>

struct carro{
    char marca[20];
    char modelo[20];
    int ano;
};

void exibe(struct carro c){
        printf("\n======================\n");
        printf("Marca: %s\n", c.marca);
        printf("Modelo: %s\n", c.modelo);
        printf("Ano: %d\n",c.ano);
        printf("======================");
    }


void preenche(struct carro *c){
    printf("Digite a marca do carro: ");
    scanf("%s",c->marca);
    printf("Digite o modelo do carro: ");
    scanf("%s",c->modelo);
    printf("Digite o ano do carro: ");
    scanf("%d",&c->ano);
}

int main(){
    struct carro c1;
    preenche(&c1);
    exibe(c1);
    return 0;
}
