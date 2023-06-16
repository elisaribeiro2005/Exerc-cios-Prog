/*  27. Defina uma estrutura de Conta que possuira o nome do cliente e seu saldo. Apos a leitura 
de uma conta (nome do cliente e saldo inicial), faca a leitura do tipo de operaçao que o usuario deseja
fazer: ’D’ (debito) ou ’C’ (credito) at´e que a operaçao digitada seja ’S’ (sair). Caso a operaçao
nao seja S (sair), leia o valor a ser debitado/creditado na conta. Chame uma funçao que ira
receber como parametro a conta do cliente, o tipo de operaçao e o valor a ser debitado/creditado
e que altere o valor do saldo da conta. Ao usuario digitar S (sair) exiba o saldo atual da conta
apos todas as operaçoes realizadas. */ 

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float saldo;
} Conta;
void alterarSaldo(Conta c, char operacao, float valor) {
    if (operacao == 'D') {
        c.saldo -= valor;
    } else if (operacao == 'C') {
        c.saldo += valor;
    }
}
int main() {
    Conta c;
    printf("Digite o nome do cliente: ");
    scanf("%s", c.nome);
    printf("Digite o saldo inicial: ");
    scanf("%f", &c.saldo);
    char operacao;
    float valor;
    do {
        printf("Digite o tipo de operacao (D - Debito, C - Credito, S - Sair): ");
        scanf(" %c", &operacao);
        if (operacao == 'S') {
            break;
        }
        printf("Digite o valor: ");
        scanf("%f", &valor);
        alterarSaldo(c, operacao, valor);
    } while (operacao != 'S');
    printf("Saldo atual: %.2f\n", c.saldo);

    return 0;
}
