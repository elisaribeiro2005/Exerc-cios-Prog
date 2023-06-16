/* Faça um programa que permita entrar com a nota de 50 alunos de uma turma e mostrar no final do programa a
maior nota, a menor nota e quantos alunos ficaram acima da média da turma.*/

#include <stdio.h>

int main()
{
    float nota[50];
    int i, acmedia = 0;
    float media, maior, menor, soma = 0;

    for (i = 0; i < 50; i ++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }
    media = soma / 50;
    maior = nota[0];
    menor = nota[0];

    for(i = 1; i < 50; i++){   // maior  // porque não posso colocar i = 0?
        if(nota[i] > maior){
            maior = nota[i];
        }
        if( nota[i] < menor){   // menor
            menor = nota [i];
        }    
    }

    for(i = 0; i < 50; i++){   // media // 
        if(nota[i] > media){
                acmedia++;
        }
    }
    printf("A maior nota foi: %.1f\n", maior);
    printf("A menor nota foi: %.1f\n", menor );
    printf("A quantidade de alunos que ficaram acima da media foi: %d\n", acmedia);

return 0;
}