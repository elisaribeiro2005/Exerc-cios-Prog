//Faça um programa que leia dois valores inteiros de x e y e que calcule e mostre a potência "x elevado a y"

#include<stdio.h>

int main()
{
    int x, y, i, j = 1;

    printf("Digite o numero da base: \n");
    scanf("%d",&x);
    printf("Digite o numero do expoente: \n");
    scanf("%d",&y);
    for( i = 1; i <= y; i++){
        j = j* x;
    }
    printf("O resultado de %d na base %d e = %d",x, y, j);

return 0;
}