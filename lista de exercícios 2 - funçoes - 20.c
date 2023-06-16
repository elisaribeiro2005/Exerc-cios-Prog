/* 20. Implemente uma funçao que inverta a ordem dos caracteres de uma string recebida 
como parametro.*/

#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int tamanho = strlen(str);
    int i, j;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char minhaString[100];
    printf("Digite uma string: ");
    gets(minhaString);
    inverterString(minhaString);
    printf("String invertida: %s\n", minhaString);

    return 0;
}

