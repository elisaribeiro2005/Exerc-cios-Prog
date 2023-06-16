/*  22. Escreva uma funçao que recebe as 3 notas de um aluno por parametro e calcule a sua 
media ponderada (pesos: 5, 3 e 2). A media ponderada e dada por 5 × n1 + 3 × n2 + 2 × n3  / 5 + 3 + 2.  */

#include <stdio.h>

float calcularMediaPonderada(float nota1, float nota2, float nota3) {
    float peso1 = 5;
    float peso2 = 3;
    float peso3 = 2;
    float somaPesos = peso1 + peso2 + peso3;
    float somaNotas = (peso1 * nota1) + (peso2 * nota2) + (peso3 * nota3);
    return somaNotas / somaPesos;
}
int main() {
    float nota1, nota2, nota3;
    float mediaPonderada;

    printf("Digite as três notas do aluno:\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    mediaPonderada = calcularMediaPonderada(nota1, nota2, nota3);
    printf("A média ponderada do aluno e: %.2f\n", mediaPonderada);

    return 0;
}