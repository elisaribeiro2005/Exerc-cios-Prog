/*9. Faça um programa que leia uma frase e conte quantos espacos ha nessa frase (utilize o comando
gets() para fazer a leitura do seu string).*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int contador = 0;

    printf("Digite uma frase: ");
    gets(frase);
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            contador++;
        }
    }
    printf("A frase possui %d espacos.\n", contador);

    return 0;
}


