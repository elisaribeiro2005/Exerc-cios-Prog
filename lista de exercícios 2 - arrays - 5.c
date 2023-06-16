/*5. Faca um programa que permita ao usuario entrar com uma matriz de 3 x 3 numeros inteiros. Em
seguida, crie dois arrays unidimensionais de tamanho 3 cada, que conterao a soma dos numeros
de cada linha da matriz no primeiro array e a soma de cada coluna da matriz no segundo.*/

#include<stdio.h>

int main()
{
    int matriz[3][3], i, j, soma_lin[3] = {0}, soma_col[3] = {0};

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um numero para a matriz [%d , %d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {                 // Cálculo da soma das linhas e colunas
        for (j = 0; j < 3; j++) {
            soma_lin[i] += matriz[i][j];
            soma_col[j] += matriz[i][j];
        }
    }
    
    /*  printf("\nMatriz digitada:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matriz[i][j]);
            }   
        printf("\n");
        }                                */

    printf("Soma das linhas: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", soma_lin[i]);
    }
    printf("\nSoma das colunas: ");
    for (j = 0; j < 3; j++) {
        printf("%d ", soma_col[j]);
    }

    return 0;
}
