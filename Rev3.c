#include <stdio.h>

int main(){

    int dias;
    float preco;

    printf("Digite quantos dias ficou no hotel ");
    scanf("%d", &dias);

    if (dias > 15)
        preco = 150 * dias + dias *15.5;
    else if (dias == 15)
        preco = 150 * dias + dias *36;
    else
        preco = 150 * dias + dias *58;

    printf("%.2f", preco);
}
