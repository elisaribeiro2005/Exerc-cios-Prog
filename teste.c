// escreva um programa que receba 10 numeros do usuário e imprima a metade de cada numero.

#include <stdio.h>

int main()
{
    int i;
    float num, metade;

    for( i = 1; i <= 10; i++){
        printf("Digite o %d' numero: ", i);
        scanf("%f", &num);
        metade = num / 2;
        printf("A metade de %.2f e: %.2f\n",num, metade);
    }

return 0;
}