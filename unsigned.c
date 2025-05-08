/*
utilizados para declarar váriaveis
que podem armazenar APENAS valores positivos
incluindo o 0 
*/

/*
int: -2,147,483,648 a 2,147,483,648
unsigned int: 0 a 4,294,967,295
char: -128 a 127
unsgined char: 0 a 255
*/

#include <stdio.h>

int main () {

    int sinal = 3000000000;
    unsigned int semsinal = 3000000000;

    printf("numero com sinal: %d\n", sinal);
    printf("numero sem sinal: %u\n", semsinal);
                           //atentar %u 
    return 0;


}