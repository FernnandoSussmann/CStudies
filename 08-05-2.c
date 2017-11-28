#include <stdio.h>

int main(){
    int valor1, valor2,valor3, aux;
    //int maior, menor, medio;

    printf("Digite um valor \n");
    scanf("%d", &valor1);
    printf("Digite outro valor \n");
    scanf("%d", &valor2);
    printf("Digite outro valor \n");
    scanf("%d", &valor3);

    if (valor1 != valor2 && valor1 != valor3 && valor2 != valor3)
            {
                if (valor1>valor2)
                {
                    aux = valor1;
                    valor1 = valor2;
                    valor2 = aux;
                if (valor1>valor3)
                {
                    aux = valor1;
                    valor1 = valor3;
                    valor3 = aux;
                }
                if (valor2>valor3)
                {
                    aux =valor2;
                    valor2=valor3;
                    valor3 = aux;
                }
                }
            printf(" %d %d %d", valor1,valor2,valor3);
            }
        else
         printf("Possuem valores iguais");
}
