#include <stdio.h>

int main()
{
    int i, j = 0;
    float num;

    for (i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &num);
        if (num < 0) {
            j += 1;
        }
    }
    printf("foram digitados %d numeros negativos", j);


    return 0;
}
