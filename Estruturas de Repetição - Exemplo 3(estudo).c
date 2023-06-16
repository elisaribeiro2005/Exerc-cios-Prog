// construa um programa que apresente o valor de H, sendo H calculado por: H = 1 + 2 + 3 + 4 ... + N.
// o valor de N será apresentado pelo usuário.

#include <stdio.h>

int main() 
{
    int h = 0, i, n;

    printf("Digite um numero para N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        h += i;
    }
    printf("A soma de todos os numeros de 1 ate %d e: %d\n", n, h);

    return 0;
}
