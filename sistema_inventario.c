#include <stdio.h>

int main(){

    char ProdA[30] = "Produto A";
    char ProdB[30] = "Produto B";

    unsigned int EstoqueA = 1000;
    unsigned int EstoqueB = 2000;

    float valorA = 10.50;
    float valorb = 20.40;

    unsigned int EstoqueMinA = 500;
    unsigned int EstoqueMinB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", ProdA, EstoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", ProdB, EstoqueB, valorb);


    resultadoA = EstoqueA > EstoqueMinA;
    resultadoB = EstoqueB > EstoqueMinB;

    printf("O produto %s tem estoque minimo %d\n", ProdA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", ProdB, resultadoB);


    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n", EstoqueA * valorA, EstoqueB * valorb, (EstoqueA * valorA) > (EstoqueB * valorb));

}