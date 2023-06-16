/* 17. Faça um programa que controla o consumo de energia dos eletrodomesticos que voce possui em casa:
(a) Crie e leia 5 eletrodomesticos que contem nome (maximo de 15 letras), potencia (real, emkW), 
e tempo ativo por dia (real, em horas)
(b) Apos a leitura dos dados dos eletrodomesticos, leia um tempo t (em dias) e mostre o consumo
total da casa e o consumo relativo de cada eletrodom´estico ( consumo do eletrodomestico / consumo total)
nesse perıodo de t dias. */

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[16];
    float pot, tempo;
} Eletrodomestico;

int main() {
    Eletrodomestico a[5];
    float consumoTotal = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Eletrodomestico %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", a[i].nome);
        printf("Potencia (em kW): ");
        scanf("%f", &a[i].pot);
        printf("Tempo ativo por dia (em horas): ");
        scanf("%f", &a[i].tempo);
        printf("\n");
    }
    for (int i = 0; i < 5; i++) {
        consumoTotal += a[i].pot * a[i].tempo;
    }
    int t;
    printf("Digite o tempo em dias: ");
    scanf("%d", &t);
    printf("\nConsumo total da casa em %d dias: %.2f kWh\n", t, consumoTotal);
    printf("Consumo relativo de cada eletrodomestico:\n");
    for (int i = 0; i < 5; i++) {
        float consumoRelativo = (a[i].pot * a[i].tempo * t) / consumoTotal;
        printf("%s: %.2f%%\n", a[i].nome, consumoRelativo * 100);
    }

    return 0;
}