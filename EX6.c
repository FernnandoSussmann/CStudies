#include <stdio.h>

int main()
{
    int numero;


    printf("Insira um numero entre 0 e 60 \n");
    scanf("%d",&numero);

    numero = (numero + 1)%61;
    printf("%d", numero);
}
