#include<stdio.h>
#include<string.h>

struct atleta{
    char nome[20];
    int idade;
    float altura;
};

    void exibe(struct atleta p){
        printf("======================\n\n");
        printf("Nome do atleta: %s\n", p.nome);
        printf("Idade: %d\n", p.idade);
        printf("Altura: %.2f\n",p.altura);
        printf("======================\n\n");
    }

int main(){
    struct atleta a1={"Messi",38,1.70};
    struct atleta a2={"Cristiano Ronaldo",40,1.87};
    struct atleta a3={"Romário",59,1.67};
    exibe(a1);
    exibe(a2);
    exibe(a3);
    
    return 0;
}
