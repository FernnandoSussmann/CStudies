#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    letra = tolower(letra);
    switch (letra)
    {
    case 'a':
        printf("E vogal \n");
        break;
    case 'e':
        printf("E vogal\n");
        break;
    case 'i':
        printf("E vogal\n");
        break;
    case 'o':
        printf("E vogal\n");
        break;
    case 'u':
        printf("E vogal\n");
        break;
    default:
        printf("Nao e vogal\n");
    }

    system("pause");
}
