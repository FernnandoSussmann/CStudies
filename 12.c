#include <stdio.h>
#include <math.h>


int main(){

    float a,b,c,x, delta;

    printf("Digite um valor pra a | ");
    scanf("%f", &a);
    if (a != 0)
    {
        printf("Digite um valor de b | ");
        scanf("%f", &b);
        printf("Digite um valor de c | ");
        scanf("%f", &c);

        delta = pow(b,2) - 4*a*c;

        if (delta > 0)
        {
            x = (-1* b +sqrt(delta))/(2*a);
            printf("Primeiro valor de x = %.2f \n", x);
            x = (-1* b - sqrt(delta))/(2*a);
            printf("Segundo valor de x = %.2f \n", x);
        }
        else
        {
            printf("delta menor que zero sem valor real. delta = %f", delta);
        }

    }
    else
    {
        printf("Valor de a invalido!");
    }




}
