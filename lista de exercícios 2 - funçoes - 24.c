/*  24. Escreva uma funçao que gere, para um valor inteiro n > 0 passado como parametro, um “quadrado” 
de n linhas e n colunas de sımbolos ’+’. Nas posiçoes da diogonal principal utilize o
sımbolo ’x’. Por exemplo, para n = 5 a funçao deve exibir:
x++++
+x+++
++x++
+++x+
++++x  */

#include <stdio.h>

void gerarQuadrado(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("x");
            } else {
                printf("+");
            }
        }
        printf("\n");
    }
}
int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    gerarQuadrado(n);

    return 0;
}