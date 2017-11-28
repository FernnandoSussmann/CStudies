#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    letra = tolower(letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("E vogal");
    else
        printf("Nao e vogal");
    system("pause");
}
