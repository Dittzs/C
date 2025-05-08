#include <stdio.h>

int main(){
    // para notas por ex é melhor usar flot por ser numero flutuante e não inteiro
    int nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Média *** \n \n");

    printf("Digite sua primeira nota \n");
    scanf("%d", &nota1);
// cuidar no %d - %f (%d = decimal) (%f= float)
    printf("Digite sua Segunda nota \n");
    scanf("%d", &nota2);

    printf("Digite sua Terceira nota \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;
         // (float) serve para substituir int em alguns casos
    printf("A média é: %.2f", media);


    return 0;



}