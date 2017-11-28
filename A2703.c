#include <stdio.h>

int main()
{
    int numeroDigitado;

    printf("Digite um numero ");
    scanf("%d", &numeroDigitado);

    if (!(numeroDigitado % 7))
        printf("Numero e multiplo de 7");
    else
        printf("Numero nao e multiplo");
}
