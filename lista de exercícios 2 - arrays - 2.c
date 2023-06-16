/* Faça um programa que receba do usuario dois vetores, A e B, com 40 posições de números inteiros cada. 
Crie um novo vetor denominado C calculando C = A − B. Mostre na tela os dados do vetor C.*/

#include <stdio.h>

int main() {
    int vetorA[40];
    int vetorB[40];
    int vetorC[40];
    int i;

    printf("Digite 40 valores inteiros para o vetor A:\n");     // Leitura dos valores para o vetor A
    for (i = 0; i < 40; i++) {
        scanf("%d", &vetorA[i]);
    }
    printf("Digite 40 valores inteiros para o vetor B:\n");    // Leitura dos valores para o vetor B
    for (i = 0; i < 40; i++) {
        scanf("%d", &vetorB[i]);
    }
    printf("Dados do vetor C:\n");    // Exibição dos dados do vetor C
    for (i = 0; i < 40; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%d - %d = %d \n", vetorA[i], vetorB[i], vetorC[i]);
    }
    
    return 0;
}
