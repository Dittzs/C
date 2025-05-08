#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação(*)
    Divisão(/)
    */

    int numero1, numero2;
    int soma, subtracao, divisao, multiplicacao;

    printf("Digite o numero 1: \n");
    scanf("%d", &numero1);
    printf("Digite o numero 2: \n");
    scanf("%d", &numero2);


    soma = numero1 + numero2;

    subtracao = numero1 - numero2;

    divisao = numero1 / numero2;

    multiplicacao = numero1 * numero2;

    printf("Soma é: %d\n", soma);
    printf("Subtração é: %d\n", subtracao);
    printf("Divisão é: %d\n", divisao);
    printf("multiplicação é: %d\n", multiplicacao);







}