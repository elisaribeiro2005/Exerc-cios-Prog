/*  Faça uum programa que leia 50 conjuntos de dois valores, o primeiro representando o numero do aluno 
e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais alto. 
Mostre o numero do aluno mais baixo e do mais alto, juntamente com suas alturas.*/

#include<stdio.h>

int main()
{
    float vetor_alt[50], maior, menor;
    int vetor_num[50], i, contmenor = 0, contmaior = 0;

    for(i = 0; i < 50; i ++){
        printf("Digite o numero do %d aluno: ", i+1);
        scanf("%d", &vetor_num[i]);
        printf("Digite a altura desse aluno (em metros): ");
        scanf("%f", &vetor_alt[i]);
    }

    maior = vetor_alt[0];
    menor = vetor_alt[0];

    for(i = 1; i < 50; i ++){
        if(vetor_alt[i] > maior){
            maior = vetor_alt[i];
            contmaior = vetor_num[i];
        }
        if(vetor_alt[i] < menor){
            menor = vetor_alt[i];
            contmenor = vetor_num[i];
        }
    }
    printf("O aluno mais baixo e o numero %d e sua altura e %.2f metros.\n", contmenor, menor);
    printf("O aluno mais alto e o numero %d e sua altura e %.2f metros.\n", contmaior, maior);

return 0;
}