#include <stdio.h>

int main(){
    int valor1, valor2,valor3;

    printf("Digite um valor \n");
    scanf("%d", &valor1);
    printf("Digite outro valor \n");
    scanf("%d", &valor2);
    printf("Digite outro valor \n");
    scanf("%d", &valor3);

    if (valor1 != valor2 && valor1 != valor3 && valor2 != valor3)
        if (valor1 < valor2 && valor1 < valor3)
            printf("O menor valor é %d \n", valor1);
        else
            if(valor2 < valor3)
                printf("O menor valor é %d \n", valor2);
            else
                //if(valor3 > valor2 && valor3 > valor1)
                    printf("O menor valor é %d \n", valor3);
    else
         printf("Possuem valores iguais");
}
