#include <stdio.h>

int main()
{
    float preco, comissao, salario;
    int quantidadeCarros;

    printf("Me informe o salario minimo \n");
    scanf("%f", &salario);
    printf("Insira a quantidade de carros vendidos \n");
    scanf("%d", &quantidadeCarros);
    printf("Insira o valor do modelo vendido \n");
    scanf("%f", &preco);

    comissao = salario * 2 + quantidadeCarros * 650 + quantidadeCarros * preco/100 * 7.5;
    printf("Sua comissao e de R$ %.2f", comissao);
}
