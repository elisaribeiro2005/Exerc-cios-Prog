#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    printf("Escreva 10 numeros inteiros positivos:\n"); //vetor de entrada
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("O vetor inserido foi:\n"); // vetor de saída
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
