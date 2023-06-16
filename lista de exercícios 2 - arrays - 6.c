/* 6. Leia uma matriz 5 x 10 que se refere respostas de 10 questoes de multipla escolha, 
referentes a 5 alunos. Leia tambem um vetor de 10 posicoes contendo o gabarito de respostas que 
podem ser a, b, c ou d. Seu programa devera comparar as respostas de cada candidato com o gabarito
e armazenar em um vetor denominado resultado, contendo a pontuacao correspondente a cada
aluno. Considere que cada resposta certa equivale a 1 ponto. Exiba a nota dos alunos.*/

#include <stdio.h>

int main()
{
    int i, j, resultado[5] = {0};
    char respostas[5][10], gabarito[10];

    printf("Digite as respostas do gabarito:\n");        
    for (i = 0; i < 10; i++){
        printf("Questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
        while (gabarito[i] != 'a' && gabarito[i] != 'b' && gabarito[i] != 'c' && gabarito[i] != 'd'){
            printf("Resposta invalida. Digite novamente: ");   // Validação da resposta do gabarito
            scanf(" %c", &gabarito[i]);
        }
    }
    for (i = 0; i < 5; i++){         // Leitura das respostas dos alunos
        printf("Respostas do aluno %d:\n", i + 1);
        for (j = 0; j < 10; j++){
            printf("Questao %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);
            while (respostas[i][j] != 'a' && respostas[i][j] != 'b' && respostas[i][j] != 'c' && respostas[i][j] != 'd'){
                printf("Resposta inválida. Digite novamente: ");    // Validação da resposta do aluno
                scanf(" %c", &respostas[i][j]);
            }
        }
    }
    for (i = 0; i < 5; i++){              // Cálculo da pontuação de cada aluno
        resultado[i] = 0;
        for (j = 0; j < 10; j++){
            if (respostas[i][j] == gabarito[j]){
                resultado[i]++;
            }
        }
    }
    printf("Notas dos alunos:\n");       // Exibição das notas dos alunos
    for (i = 0; i < 5; i++){
        printf("Aluno %d: %d\n", i + 1, resultado[i]);
    }

    return 0;
}
