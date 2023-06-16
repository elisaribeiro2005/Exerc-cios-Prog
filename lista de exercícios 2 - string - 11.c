/* 11. Usando o comando for, faca um programa que conte o numero de 1’s que aparecem em uma string. 
Exemplo: 0011001 → 3 */

#include <stdio.h>

int main() {
    char str[100];
    int contador = 0;

    printf("Digite uma string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1') {
            contador++;
        }
    }
    printf("O numero de ocorrencias de '1' na string e: %d\n", contador);

    return 0;
}
