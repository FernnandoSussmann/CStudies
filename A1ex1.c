#include <stdio.h>

int main()
{
    float grausCelcios;
    float resultadoFahrenheit;

    printf("Digite a temperatura em graus celcios \n");
    scanf("%f", &grausCelcios);
    resultadoFahrenheit = grausCelcios * 9 / 5 + 32;

    printf("Temperatura e de %.2fF = %.2fC", resultadoFahrenheit, grausCelcios);
}
