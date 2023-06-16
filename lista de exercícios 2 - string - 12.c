/*12. Faça um programa que receba do usuario uma string. O programa imprime a string sem suas vogais. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Digite uma string: ");
    gets(str);
    for (i = 0, j = 0; i < strlen(str); i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
                str[j++] = str[i];
        }
    }
    str[j] = '\0';  // Adicionar o caractere nulo no final da string resultante

    printf("String sem vogais: %s\n", str);

    return 0;
}