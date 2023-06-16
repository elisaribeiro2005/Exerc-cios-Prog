/*  28. Voce deve fazer um programa de gestao de biblioteca. Para isso defina uma estrutura de Livro
que contenha, autor, tıtulo e numero de paginas. A biblioteca possui um acerto de 250 livros
ainda nao cadastrados. Faça uma funçao que realize o cadastro dos livros que essa biblioteca
possui.  */


#include <stdio.h>
#include <string.h>

typedef struct {
    char autor[50];
    char titulo[100];
    int numPaginas;
} Livro;

void cadastrarLivros(Livro biblioteca[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Cadastro do livro %d\n", i + 1);
        printf("Autor: ");
        scanf("%s", biblioteca[i].autor);
        printf("Título: ");
        scanf("%s", biblioteca[i].titulo);
        printf("Número de páginas: ");
        scanf("%d", &biblioteca[i].numPaginas);
        printf("\n");
    }
}
int main() {
    const int MAX_LIVROS = 250;
    Livro biblioteca[MAX_LIVROS];
    printf("Cadastro de livros na biblioteca\n");
    printf("Quantidade máxima de livros a serem cadastrados: %d\n", MAX_LIVROS);
    int quantidade;
    printf("Quantidade de livros a serem cadastrados: ");
    scanf("%d", &quantidade);
    if (quantidade <= MAX_LIVROS) {
        cadastrarLivros(biblioteca, quantidade);
        printf("Cadastro concluído.\n");
    } else {
        printf("Quantidade de livros excede o limite da biblioteca.\n");
    }
    return 0;
}