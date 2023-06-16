/* Escrever um programa que leia um número não determinado e calcule a: 
* media aritimetica dos valores lidos
* quantdade de valores positivos e negativos
* percentual de valores positivos e negativos
Mostre os resultados. Numero que encerra a leitura é 0.*/

#include<stdio.h>

int main()
{
    float media, perPositivos, perNegativos, valor = -1, soma = 0;
    int qtdNegativos = 0, qtdPositivos = 0, total;

    while(valor != 0){
    printf("Digite um numero: \n");
    scanf("%f", &valor);
        if(valor > 0){
            qtdPositivos += 1;
        }
        if(valor < 0){
            qtdNegativos +=1;
        }
        soma += valor;
    }
    total = qtdPositivos + qtdNegativos;
    perPositivos = (qtdPositivos * 100) / total;
    perNegativos = (qtdNegativos * 100) / total;
    media = soma / total;

    printf("Total: %d\n", total);
    printf("Percentual positivos = %.2f\n", perPositivos);
    printf("Percentual negativos = %.2f\n", perNegativos);
    printf("Quantidade de numeros positivos = %d\n", qtdPositivos);
    printf("Quantidade de numeros negativos = %d\n", qtdNegativos);
    printf("Media: %.2f\n", media);

return 0;
}
