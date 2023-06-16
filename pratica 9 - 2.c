/*2) Escrever e executar um programa em linguagem C que:
i. Declare uma estrutura (struct) para representar uma pessoa contendo as informações (variáveis):
• nome
• idade
ii. Crie uma variável do tipo da struct declarada;
iii. Preencha as variáveis (os campos) da estrutura com valores do mesmo tipo delas. Exemplo: “João da silva”, 29;
iv. Crie um ponteiro que apontará para uma variável do tipo da estrutura (struct) criada.
v. Armazene no ponteiro o endereço de memória da estrutura.
vi. Utilizando o ponteiro (e não a variável do tipo da struct), mostre na tela o conteúdo dos campos “nome” 
e “idade” da variável tipo da struct (Para a qual o ponteiro se encontra apontando).*/

#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    int idade;
};

int main() {
    struct Pessoa pessoa1;

    strcpy(pessoa1.nome, "Elisa Ribeiro Goncalves");
    pessoa1.idade = 18;

    struct Pessoa *pPessoa;

    pPessoa = &pessoa1;

    printf("Nome: %s\n", pPessoa->nome);
    printf("Idade: %d\n", pPessoa->idade);

    return 0;
}