#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Insira a nota da primeira prova \n");
    scanf("%f", &nota1);
    printf("Insira a nota da segunda prova \n");
    scanf("%f", &nota2);
    printf("Insira a nota da terceira prova \n");
    scanf("%f", &nota3);

    media = (nota1*2 + nota2*5 + nota3*3)/10;

    printf("Sua media e igual a: \n %.2f", media);
}
