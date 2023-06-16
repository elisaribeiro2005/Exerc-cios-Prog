
#include <stdio.h>
int main()
{
    int vetor[6];
    int i;
    
    for (i = 1; i <= 6; i++ ){
        printf("Entre com o numero %d:", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 1; i <= 6; i++ ){
        printf("Elemento %d e: %d\n", i, vetor[i]);
    }

return 0;
}