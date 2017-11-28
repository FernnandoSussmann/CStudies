#include <stdio.h>
#include <stdlib.h>

int main(){

    int menu;
    float valor1,valor2,resultado;

    printf("Escolha: \n 1 Para somar,\n 2 Para subtrair,\n 3 para multiplicar e\n 4 para dividir\n");
    scanf("%d", &menu);

    if (menu < 1 || menu > 4)
        printf("Operacao invalida");
    else
    {
        printf("Digite o primeiro valor\n");
        scanf("%f", &valor1);
        printf("Digite o segundo valor\n");
        scanf("%f", &valor2);
        if (valor2 == 0)
        printf("Operacao nao pode ser feita. \n Salmo 4.4: Jamais dividiras por 0\n");
        else{
            switch (menu){
                case 1:
                    resultado = valor1 + valor2;
                    break;
                case 2:
                    resultado = valor1 - valor2;
                    break;
                case 3:
                    resultado = valor1 * valor2;
                    break;
                case 4:
                        resultado = valor1 / valor2;
                    break;
            }
                printf("%.10f\n", resultado);
        }
    }

    system("pause");
}
