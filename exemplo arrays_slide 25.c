// Dada uma sequência de 20 números fornecidos pelo usuário, imprimi-la na ordem inversa à da leitura

#include <stdio.h>

int main() {
    int valores[20];
    int i;

    printf("Digite 20 valores inteiros\n");
    for (i = 0; i <= 19; i++) {
        printf("Valor %d:", i+1);   // Leitura dos valores
        scanf("%d", &valores[i]);
    }

    printf("Valores na ordem inversa:\n");     // Impressão dos valores na ordem inversa
    for (i = 19; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}

