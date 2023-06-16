/* Faça um programa que:
✔ Crie uma matriz de distâncias entre 4 cidades diferentes;
✔ Peça para o usuário entrar com as distâncias entre as cidades;
✔ Exiba na tela a matriz de distâncias criada;
✔ Quando o usuário digitar o número de duas cidades o programa deverá retornar a distância entre elas;*/

#include <stdio.h>

int main()
{
    int matriz_distancias[4][4], cidade1, cidade2;

    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite a distancia entre as cidades %d e %d: ", i+1, j+1);
            scanf("%d", &matriz_distancias[i][j]);
        }
    }
    
    printf("\nMatriz de distancias:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz_distancias[i][j]);
        }
        printf("\n");
    }

    // opcional
    
    printf("\nDigite o numero das duas cidades (entre 1 e 4): ");
    scanf("%d %d", &cidade1, &cidade2);

    printf("A distancia entre a cidade %d e a cidade %d e %d.\n", cidade1, cidade2, matriz_distancias[cidade1-1][cidade2-1]);

    return 0;
}
