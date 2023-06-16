/* Faça um programa que declare um vetor de 5 posições do tipo char e execute as operações:
a. Faça um comando for para que o usuário possa preencher o vetorncriado.
b. Atribua a letra B no indice 6.
c. Atribua a letra K no indice 3.
d. Escreva na tela o que está no indice 2.
e. Faça um comando for para exibir na tela todos os valores do vetor.*/

#include <stdio.h>

int main() {
    char vetor[5];
    int i;

    // Preenchendo o vetor
    printf("Digite 5 letras para preencher o vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("Letra %d: ", i + 1);
        scanf(" %c", &vetor[i]);
    }

    // Atribuindo a letra 'B' no índice 6
    vetor[6] = 'B';

    // Atribuindo a letra 'K' no índice 3
    vetor[3] = 'K';

    // Imprimindo o valor do índice 2
    printf("Valor no índice 2: %c\n", vetor[2]);

    // Exibindo todos os valores do vetor
    printf("Valores do vetor:\n");
    for (i = 0; i < 7; i++) {
        printf("%c ", vetor[i]);
    }
    printf("\n");

    return 0;
}
