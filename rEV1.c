#include <stdio.h>
#include <math.h>

int main(){

    float x,y;

    printf("_________________________________________________ \n");
    printf("///////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");
    printf("||||||||Programa de calculo da equacao||||||||||| \n");
    printf("__Somente valores maiores que 6 e menores que -6_ \n");
    printf("_________________________________________________ \n");

    printf("Insira o valor de X ");
    scanf("%f", &x);

    if(x>=6 || x<=-6)
    {
        y = 8/sqrt(x*x-25);
        printf("Resultado %f \n", y);
    }
    else
        printf("valor invalido");

    printf("_________________________________________________ \n");
}
