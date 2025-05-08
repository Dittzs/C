#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua Idade: \n");
    scanf("%d", &idade);
    
    printf("Digite sua Altura: \n");
    scanf("%f", &altura);

    printf("Digite seu Nome: \n");
    scanf("%s", &nome);

    printf("Digite sua Matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %f", idade, altura);

    return 0;




}