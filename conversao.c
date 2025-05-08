#include <stdio.h>

    void moon();    

    int main() {

    int x = 10;
    float y = 3.5;
    float resultado = x + y;

    printf("Resultado: %.2f\n", resultado);

    moon();

    return 0;
}

void moon(){

    int x = 10;
    int y = 3;
    float quociente = (float) x / y;

    printf("Quociente: %.2f\n", quociente);



}