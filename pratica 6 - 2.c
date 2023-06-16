#include <stdio.h>

int main(){

    int i,j;
    int matriz[4][4];

    for(i=0;i<4;i++){      // linha
        for(j=0;j<4;j++){  // coluna
            printf("Digite o numero na posicao Linha [%d] Coluna [%d]:\n",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Matriz digitada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O numeros que sao pares esta na posicao:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz[i][j]%2==0){
                printf("[%d] [%d]\n",i,j);
            }
        }
    }
    return 0;
}
