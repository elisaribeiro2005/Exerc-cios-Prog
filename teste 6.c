// Escreva um programa que leia 20 valores e encontre o maior e o menor deles. mostre o resultado

#include <stdio.h>

int main()
{
    int i, num, maior, menor;

    printf("Digite o valor 1: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    for (i = 2; i <= 20; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    printf("O maior valor digitado e: %d\n", maior);
    printf("O menor valor digitado e: %d\n", menor);

    return 0;
}