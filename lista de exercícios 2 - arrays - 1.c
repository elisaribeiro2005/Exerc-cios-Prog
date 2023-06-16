/*1. Crie um programa que le 30 valores inteiros e, em seguida, 
mostre na tela os valores lidos na ordem inversa.*/

#include <stdio.h>

int main() {
    int valores[30];
    int i;

    printf("Digite 30 valores inteiros\n");
    for (i = 0; i <= 29; i++) {
        printf("Valor %d:", i+1);   // Leitura dos valores
        scanf("%d", &valores[i]);
    }

    printf("Valores na ordem inversa:\n");     // Impressão dos valores na ordem inversa
    for (i = 29; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}

