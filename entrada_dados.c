#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Qual sua altura? ");
    scanf("%f", &altura);
    printf("Sua altura é %.2f\n", altura);

    printf("Qual seu nome? ");
    scanf("%s", &nome);
    printf("Seu nome é %s\n", nome);

    printf("Qual a opção? ");
    scanf(" %c", &opcao);
    printf("A opção é %c\n", opcao);

    
}