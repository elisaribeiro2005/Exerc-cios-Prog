/* 15. Implemente um programa que leia o nome, a idade e o endere¸co de uma pessoa 
e armazene os dados em uma estrutura. Apos a leitura, imprima os valores na tela. */

#include <stdio.h>

typedef struct sPessoa {
    char nome[50];
    int idade;
    char endereco[100];
} Pessoa;

int main() 
{
    Pessoa a;
    printf("Digite o nome: ");
    gets(a.nome);
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &a.idade);
    fflush(stdin);
    printf("Digite o endereco: ");
    gets(a.endereco);
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Endereco: %s\n", a.endereco);

    return 0;
}

