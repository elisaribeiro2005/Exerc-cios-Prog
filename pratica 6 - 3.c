#include <stdio.h>

int main() {
    float matriz[7][4];
    float soma = 0.0;
    int i, j;

    for (i = 0; i < 7; i++) {     // linha
        for (j = 0; j < 4; j++) { // coluna
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos da matriz e: %.2f\n", soma);

    return 0;
}
