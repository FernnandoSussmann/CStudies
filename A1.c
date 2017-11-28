#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    float nota;

    printf("Digite um valor inteiro \n");
    scanf("%d", &valor);
    printf("Digite sua nota \n");
    scanf("%f", &nota);
    printf("valor = %d \n", valor);
    printf("nota = %.2f \n", nota);

    //system("pause");
}
