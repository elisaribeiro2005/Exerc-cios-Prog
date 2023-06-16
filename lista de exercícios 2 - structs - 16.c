/* 16. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a 
matrıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
(a) Permita ao usu´ario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova
(c) Encontre o aluno com maior media geral.
(d) Encontre o aluno com menor media geral.
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 60 para aprovaçao. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    int matricula;
    char nome[50];
    float nota1, nota2, nota3, media;
};

struct aluno maiorNota1(struct aluno *alunos){
    struct aluno maior;
    maior.nota1 = 0;
    for(int i = 0; i < 5; i++){
        if(alunos[i].nota1 > maior.nota1){
            maior = alunos[i];
        }
    }
    return maior;
}

int main()
{
    struct aluno alunos[5];
    for(int i = 0; i < 5; i++){
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota 1 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota 2 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota2);
        printf("Digite a nota 3 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota3);
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
    }
    struct aluno maior = maiorNota1(alunos);
    printf("Aluno com maior nota na primeira prova: %s\n", maior.nome);
    struct aluno maiorMedia;
    maiorMedia.media = 0;
    for(int i = 0; i < 5; i++){
        if(alunos[i].media > maiorMedia.media){
            maiorMedia = alunos[i];
        }
    }
    printf("Aluno com maior media: %s\n", maiorMedia.nome);

    struct aluno menorMedia;
    menorMedia.media = 10;
    for(int i = 0; i < 5; i++){
        if(alunos[i].media < menorMedia.media){
            menorMedia = alunos[i];
        }
    }
    printf("Aluno com menor media: %s\n", menorMedia.nome);

    for(int i = 0; i < 5; i++){
        if(alunos[i].media >= 6){
            printf("Aluno %s aprovado\n", alunos[i].nome);
        }else{
            printf("Aluno %s reprovado\n", alunos[i].nome);
        }
    }
    return 0;
}