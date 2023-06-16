/* 4) Codifique, compile e execute um programa em C que na função principal:
a) Aloque dinamicamente um vetor de 5 números inteiros;
b) Peça ao usuário para digitar os 5 números no espaço alocado;
c) Imprima na tela os 5 números digitados;
d) Libere a memória alocada. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int i;

    vetor = (int *)malloc(5 * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1; 
    }
    printf("Digite 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Numeros digitados:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    free(vetor);       // Liberação da memória alocada

    return 0;
}