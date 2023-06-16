/*  6) Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo usuário. 
Em seguida, preencha as posições da matriz e imprima todos os elementos. No fim, crie uma função que receba 
um valor e, retorne 1 caso o valor esteja na matriz ou retorne 0 caso não esteja na matriz.
                                Entrada
A entrada de seu programa deverá ser dois números inteiros positivos referentes á
dimensão da matriz. Depois deverá receber os números, também inteiros, até preencher
toda a matriz. Por fim, receberá um número inteiro.
                                Saída
A saída de seu programa deverá ser a matriz preenchida na entrada. Caso o número de
entrada esteja contido na matriz, retornará o valor 1, caso não, retornará o valor 0; com
pulo de linha no final da sentença.*/

#include <stdio.h>
#include <stdlib.h>

int** alocarMatriz(int linhas, int colunas) {
    int** matriz;
    int i;

    matriz = (int**)malloc(linhas * sizeof(int*));
    if (matriz == NULL) {
        return NULL; 
    }

    for (i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            while (i > 0) {
                i--;
                free(matriz[i]);
            }
            free(matriz);
            return NULL; 
        }
    }

    return matriz;
}

void preencherMatriz(int** matriz, int linhas, int colunas) {
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int** matriz, int linhas, int colunas) {
    int i, j;

    printf("Matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int buscarElemento(int** matriz, int linhas, int colunas, int elemento) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] == elemento) {
                return 1; 
            }
        }
    }

    return 0; 
}

void liberarMatriz(int** matriz, int linhas) {
    int i;

    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int linhas, colunas;
    int** matriz;
    int elemento;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    matriz = alocarMatriz(linhas, colunas);
    if (matriz == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    preencherMatriz(matriz, linhas, colunas);

    imprimirMatriz(matriz, linhas, colunas);

    printf("Digite um numero para buscar na matriz: "); /* não entendi como eu iria fazer: 
Caso o número de entrada esteja contido na matriz, retornará o valor 1, caso não, retornará o valor 0; 
com pulo de linha no final da sentença.*/
    scanf("%d", &elemento);

    if (buscarElemento(matriz, linhas, colunas, elemento)) {
        printf("%d esta na matriz.\n", elemento);
    } else {
        printf("%d nao esta na matriz.\n", elemento); 
    }

    liberarMatriz(matriz, linhas);

    return 0;
}
