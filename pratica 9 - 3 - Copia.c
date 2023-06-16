/* 3) Usando a passagem por referência, crie as seguintes funções:
- void preencheVetor(int *vet, int n)
- void imprimeVetor(int *vet, int n)
- int retornaMaiorElemento(int *vet, int n)
Implemente o corpo das 3 funções e crie um vetor na main chamando em seguida cada
uma das funções criadas e mostrando, quando tiver, seu resultado.
Entrada
A entrada de seu programa deverá ser um número n inteiro positivo que será utilizado
para definir o tamanho do vetor a ser preenchido e os números de acordo com a limitação
do número n.
Saída
A saída deverá ser o vetor com os números preenchidos na entrada e o maior elemento
do vetor, separados por um pulo de linha.*/

#include <stdio.h>

void preencheVetor(int *vet, int n) {
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

void imprimeVetor(int *vet, int n) {
    printf("Vetor: ");
    for (int i = 0; i < n; i++) {
        printf(" %d ;", vet[i]);
    }
    printf("\n");
}

int retornaMaiorElemento(int *vet, int n) {
    int maior = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int main() {
    int n;
    int maiorElemento;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    preencheVetor(vetor, n);
    imprimeVetor(vetor, n);
    maiorElemento = retornaMaiorElemento(vetor, n);
    printf("Maior elemento: %d\n", maiorElemento);

    return 0;
}
