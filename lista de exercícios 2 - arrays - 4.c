/*4. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <stdio.h>

int main() {
    int matriz[4][4], i, j, cont = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor da matriz ( %d , %d ):\n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Valores maiores que 10 na matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                printf("%d ", matriz[i][j]);
                cont++;
            }
        }
    }
    printf("\nTotal de valores maiores que 10: %d\n", cont);

    return 0;
}

