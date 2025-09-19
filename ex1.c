#include <stdio.h>
struct personagem{
    int forca;
    int energia;
    int experiencia;
};

int main() {
    struct personagem p1;
    p1.forca=10;
    p1.energia=50;
    p1.experiencia=30;
    
    struct personagem p2={18,20,25};
    
   
   return 0;
}
