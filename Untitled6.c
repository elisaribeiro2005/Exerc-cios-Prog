#include <stdio.h>

int main() {
    float matriz[3][3];
    float media = 0.0;
    int i, j;

    // Lendo os elementos da matriz e somando-os � vari�vel "media"
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            media += matriz[i][j];
        }
    }

    // Calculando a m�dia dos elementos
    media = media / 9.0;

    // Imprimindo a m�dia dos elementos
    printf("A m�dia dos elementos da matriz �: %.2f\n", media);

    return 0;
}

