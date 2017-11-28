#include <stdio.h>

int main()
{
    int quantidadeWatts;
    float valorPago, wattsUnidade, valorDescontado;

    printf("Insira a quantidade que quilowatts \n");
    scanf("%d", &quantidadeWatts);
    wattsUnidade = (1000/700);
    valorPago = quantidadeWatts * wattsUnidade;
    valorDescontado = valorPago - valorPago*0.1;
    printf("Valor cada quilowatts %.2f \n", wattsUnidade);
    printf("Valor Total %.2f \n", valorPago);
    printf("Valor com descontos %.2f", valorDescontado);
}
