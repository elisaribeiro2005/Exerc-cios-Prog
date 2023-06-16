/* 18. Faca um programa que gerencie o estoque de um mercado
(a) Crie e leia um vetor de 5 produtos, onde cada produto possui as seguintes informaÇoes:
codigo (inteiro), nome (maximo de 15 caracteres), preco e quantidade em estoque.
(b) Leia um pedido, composto por um c´odigo de produto e a quantidade que que o usuario
deseja comprar. Localize este codigo no vetor e, se houver quantidade suficiente para
atender o pedido integralmente, atualize o estoque e informe ao usuario. Caso nao haja,
avise ao usuario que nao ha estoque suficiente.
(c) Repita as leituras dos pedidos ate que o usuario digite um codigo de produto negativo ou zero  */

#include <stdio.h>
#include <string.h>

typedef struct {
    int codigo, quant;
    char nome[16];
    float preco;
} Produto;

int main() 
{
    Produto estoque[5];
    for (int i = 0; i < 5; i++) {
        printf("Produto %d\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &estoque[i].codigo);
        if (estoque[i].codigo <= 0) {
            break;
        }
        printf("Nome: ");
        scanf("%s", estoque[i].nome);
        printf("Preço: ");
        scanf("%f", &estoque[i].preco);
        printf("Quantidade em estoque: ");
        scanf("%d", &estoque[i].quant);
        printf("\n");
    }
    while (1) {
        int codigo, quant;
        printf("Digite o código do produto (zero ou negativo para sair): ");
        scanf("%d", &codigo);
        if (codigo <= 0) {
            break;
        }
        printf("Digite a quantidade desejada: ");
        scanf("%d", &quant);
        int encontrado = 0;
        for (int i = 0; i < 5; i++) {
            if (estoque[i].codigo == codigo) {
                encontrado = 1;
                if (estoque[i].quant >= quant) {
                    estoque[i].quant -= quant;
                    printf("Pedido atendido. Estoque atual do produto '%s': %d\n", estoque[i].nome, estoque[i].quant);
                } else {
                    printf("Não há estoque suficiente do produto '%s'. Estoque atual: %d\n", estoque[i].nome, estoque[i].quant);
                }
                break;
            }
        }
        if (!encontrado) {
            printf("Produto não encontrado.\n");
        }
        printf("\n");
    }
    return 0;
}