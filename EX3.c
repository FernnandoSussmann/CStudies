#include <stdio.h>

int main()
{
    int valor, dezena;

    printf("Digite 1 valor inteiro com 3 digitos \n");
    scanf("%d", &valor);
    dezena = valor %100/10;
    printf("A dezena e %d", dezena);
}
