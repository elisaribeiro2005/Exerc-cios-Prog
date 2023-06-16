/* 5) Codifique, compile e execute um programa em C que defina uma estrutura para armazenar um cadastro 
de cliente: nome, idade e telefone. Pergunte ao usuário o número de clientes e aloque dinamicamente na 
memória a quantidade de estruturas necessárias. Em seguida, crie duas funções: a primeira deverá ler os 
dados dos clientes e a segunda imprimir as informações cadastradas.
                                Entrada
A entrada deverá ser um número inteiro e positivo referente á quantidade de clientes
alocados dinamicamente. Sua primeira função deverá ler o nome, com tamanho máximo
de 50 caracteres, idade e telefone do cliente.
                                Saída
A saída deverá chamar a segunda função que irá imprimir as informações cadastradas,
com pulo de linha no final da sentença.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
    char telefone[20];
} Cliente;

void lerClientes(Cliente *clientes, int quantidade) {
    int i;

    for (i = 0; i < quantidade; i++) {
        printf("Digite o nome do cliente %d: ", i + 1);
        scanf("%s", clientes[i].nome);

        printf("Digite a idade do cliente %d: ", i + 1);
        scanf("%d", &clientes[i].idade);

        printf("Digite o telefone do cliente %d: ", i + 1);
        scanf("%s", clientes[i].telefone);
    }
}

void imprimirClientes(Cliente *clientes, int quantidade) {
    int i;

    for (i = 0; i < quantidade; i++) {
        printf("\nCliente %d:\n", i + 1);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Idade: %d\n", clientes[i].idade);
        printf("Telefone: %s\n", clientes[i].telefone);
    }
}

int main() {
    int quantidade;
    Cliente *clientes;

    printf("Digite o numero de clientes: ");
    scanf("%d", &quantidade);

    clientes = (Cliente *)malloc(quantidade * sizeof(Cliente));

    if (clientes == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    lerClientes(clientes, quantidade);

    imprimirClientes(clientes, quantidade);

    free(clientes);

    return 0;
}
