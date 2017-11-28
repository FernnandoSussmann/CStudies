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
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("E vogal\n");
        break;
    default:
        printf("Nao e vogal\n");
    }

    system("pause");
}
