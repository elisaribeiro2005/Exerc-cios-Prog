/* 19. Faca um programa que leia um vetor com os dados de 5 carros: marca (maximo 15 letras), ano
e preco. Leia um valor p e mostre as informacoes de todos os carros com preco menor que p.
Repita este processo ate que seja lido um valor p = 0.  */

#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[16];
    int ano;
    float preco;
} Carro;

int main() {
    Carro c[5];
    for (int i = 0; i < 5; i++) {
        printf("Carro %d\n", i + 1);
        printf("Marca: ");
        scanf("%s", c[i].marca);
        printf("Ano: ");
        scanf("%d", &c[i].ano);
        printf("Preco: ");
        scanf("%f\n", &c[i].preco);
    }
    float p;
    while (1) {
        printf("Digite o valor p (zero para sair): ");
        scanf("%f", &p);
        if (p == 0) {
            break;
        }
        printf("Carros com preco menor que %.2f:\n", p);
        int encontrado = 0;
        for (int i = 0; i < 5; i++) {
            if (c[i].preco < p) {
                printf("Marca: %s\n", c[i].marca);
                printf("Ano: %d\n", c[i].ano);
                printf("Preco: %.2f\n", c[i].preco);
                encontrado = 1;  // pelo menos um carro foi encontrado com preço menor que p 
            }
        }
        if (!encontrado) {
            printf("Nenhum carro encontrado.\n");
        }
        printf("\n");
    }
    return 0;
}