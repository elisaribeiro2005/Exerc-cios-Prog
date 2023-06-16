#include <stdio.h>

int main ()
{
    int vetor[10];
    int i, pares = 0;

    printf("Escreva 10 numeros inteiros positivos: \n"); // vetor de entrada
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("A quantidade de vetores pares sao: "); // contagem dos numeros pares
    for (i = 0; i<10; i++) {
        if(vetor[i] % 2 == 0) {
            pares++;
        }
    }
    printf("%d \n", pares); // resultado

    return 0;
}
