/*1) Escrever e executar um programa em linguagem C que:
i. Crie uma variavel do tipo int.
ii. Armazene um valor (numero) do tipo inteiro na variavel criada.
iii. Crie um ponteiro "p1" do tipo ponteiro para int.
iv. Crie um ponteiro "p2" tambem do tipo ponteiro para int.
v. Armazene no ponteiro "p1" o endereco de memoria da variavel do tipo int
vi. Armazene o ponteiro "p1" no ponteiro "p2". Em outras palavras, p2 recebe p1, so isso (p2 = p1).
vii. Mostre na tela o conteudo dos enderecos de memoia apontados pelos ponteiros p1 e p2.  */

#include <stdio.h>

int main() {
    int numero = 10; 
    int *p1; 
    int *p2; 

    p1 = &numero; 
    p2 = p1; 

    printf("Conteudo apontado por p1: %d\n", *p1); 
    printf("Conteudo apontado por p2: %d", *p2); 

    return 0;
}
