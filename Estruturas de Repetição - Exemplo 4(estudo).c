#include<stdio.h>

int main()
{
    float a, b, div;

    do{
    printf("Digite um numero para o numerador: ");
    scanf("%f", &a);
    printf("Digite um numero para o denominador: ");
    scanf("%f", &b);
    }while(b > a || b == 0);
    div = a / b;
    printf(" a divisao e: %.2f", div);
        
return 0;
}