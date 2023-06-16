#include <stdio.h>

int main()
{
    int i, j, matriz[5][5];

    for(i = 0; i < 5; i++){         // inserir linhas
        for(j = 0; j < 5; j++){     // inserir colunas
            printf("Digite um numero na posicao Linha %d Coluna %d:\n",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("A Diagonal principal e composta por: ");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                printf("%d ",matriz[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
