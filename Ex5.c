/*
5) Escreva um programa que inverta os caracteres de um string.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char frase[50];
    int i, tam;

    printf("Digite uma Frase: ");
    gets(frase);
    tam = strlen(frase);

    printf("\nFrase invertida: ");    
    for(i = tam-1; i >= 0; i--) {
        printf("%c", frase[i]);
    }

    return 0;
}