#include <stdio.h>

void lua();

int main(){

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.14159265358979323846;

    printf("Numero preciso (double): %.15f\n", numeroPreciso);
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);


    lua();
    return 0;

}


void lua(){

    short int numeroPequeno = 32767;
    printf("NUmero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768;
    printf("Numero pequeno atuallizado (short int): %d\n", numeroPequeno);


}