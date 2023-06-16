#include<stdio.h>

int main()
{
    float matF[3][4];
    int l, c;

    for (l = 0; l < 3; l++){
        for (c = 0; c < 4; c++){
            printf("\nValor da Posicao (%d,%d): ", l, c);
            scanf("%f", &matF[l][c]);
        }
    }
    for (l = 0; l < 3; l++){
        for (c = 0; c < 4; c++){
            printf("Posicao (%d,%d): %.2f\n", l, c, matF[l][c]);
        }
    }
    
    return 0;
}