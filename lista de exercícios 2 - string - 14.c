/*  14. Faça um programa que receba uma string e a imprima de tras pra frente. 
(Nao utilize a funcao rev) */

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i, tras;

    printf("Digite uma string: ");
    gets(str);
    tras = strlen(str);     // Calcula o comprimento da string
    printf("String invertida: ");    // Imprime a string de trás para frente
    for (i = tras - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
