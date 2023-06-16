/*7. Faça um programa que entre com um nome e imprima o nome somente se a primeira letra do
nome for ’a’ (maiuscula ou minuscula).*/

#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);

    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("Nome: %s\n", nome);
    }

    return 0;
}

