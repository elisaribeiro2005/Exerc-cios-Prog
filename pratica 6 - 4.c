#include <stdio.h>

int main() {
    float matriz[3][3];
    float media = 0.0;
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
            media += matriz[i][j];
        }
    }
    media /= 9.0;
    printf("A média dos elementos da matriz e: %.2f\n", media);

    return 0;
}

