#include <stdio.h>

int main(){
    /*
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com subtraão (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
    */

    int numero1 = 10, numero2, resultado;

    resultado = 10;

    printf("Resultado: %d\n", resultado);

    resultado += 20;
    printf("Resultado: %d\n", resultado);

    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    resultado *= 10;
    printf("Resultado: %d\n", resultado);

    resultado /= 2;
    printf("Resultado: %d\n", resultado);


}