/* 10. Escreva um programa que recebe uma string s e inteiros nao-negativos i e j e devolve o segmento
s[i..j]. Exemplo: s =“Texto de exemplo”, i = 2 e j = 7. Segmento sera “xto de” */

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, tamanho;

    printf("Digite uma string: ");
    gets(s);

    printf("Digite os indices i e j: ");
    scanf("%d %d", &i, &j);

    tamanho = strlen(s);

    if (i < 0 || i >= tamanho || j < 0 || j >= tamanho || i > j) {
        printf("Indices invalidos.\n");
    } else {
        printf("Segmento: ");
        for (int k = i; k <= j; k++) {
            printf("%c", s[k]);
        }
        printf("\n");
    }

    return 0;
}
