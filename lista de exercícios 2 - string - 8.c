/*  8. Faça um programa que leia duas strings A e B. Determine quantas vezes a string A ocorre 
na string B. (Nao utilize a função strcmp())   */ 

#include <stdio.h>
#include <string.h>

int main()
{
    char strA[100], strB[100];
    int contador = 0, tamanhoA = 0, tamanhoB = 0, i, j;

    printf("Digite a string A: ");
    gets(strA);
    fflush(stdin);
    printf("Digite a string B: ");
    gets(strB);

    while (strA[tamanhoA] != '\0' && strA[tamanhoA] != '\n') {
        tamanhoA++;
    }
    while (strB[tamanhoB] != '\0' && strB[tamanhoB] != '\n') {
        tamanhoB++;
    }

    for (i = 0; i <= tamanhoB - tamanhoA; i++) {
        int encontrou = 1;
        for (j = 0; j < tamanhoA; j++) {
            if (strA[j] != strB[i + j]) {
                encontrou = 0;
                break;
            }
        }
        if (encontrou) {
            contador++;
        }
    }

    printf("A string A ocorre %d vezes na string B.\n", contador);

    return 0;
}