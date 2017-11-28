#include <stdio.h>

int main()
{
    int valor, variavelU, variavelD, variavelC, inverso;

    printf("Digite um numero de 3 digitos \n");
    scanf("%d", &valor);
    if (valor < 999 && valor > -999)
    {
            variavelD = valor % 100/10;
            variavelC = valor/100;
            variavelU = valor % 10;
            inverso = variavelU*100 + variavelD*10 + variavelC;
            printf("O valor invertido de %d e %d", valor, inverso);
    }
    else
    {
        printf("Eram 3 digitos");
    }
}
