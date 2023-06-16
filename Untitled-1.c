/*

° Faça um programa que permita o usuário digitar uma string e no final, imprimir o tamanho da string,
isto é, quantos caracteres ela possui com exceção do '\0'.*/

#include <stdio.h>

int main() {
    char str[100];
    int tamanho = 0;

    printf("Digite a string: ");

    for (int i = 0; i < 99; i++) {     // Lê um caractere por vez até encontrar a quebra de linha '\n' 
        str[i] = getchar();            // ou atingir o tamanho máximo
        if (str[i] == '\n') {
            break;
        }
        tamanho++;
    }

    printf("Tamanho: %d\n", tamanho);

    return 0;
}

/*° Declare duas strings com capacidade para 20 caracteres. Leia pela entrada padrão a primeira string.
Em seguida, copie o texto da primeira string para a segunda.
Imprima no final o conteúdo das duas strings.*/



/*° Declare duas strings com capacidade para 20 caracteres e uma para 40 caracteres. 
Leia pela entrada padrão a primeira e a segunda string.
Em seguida, junte as duas strings lidas na terceira e imprima no final o seu conteúdo.   */