// S = 1 + 3/2! + 5/3! + 7/4! ... 
#include <stdio.h>

int main()
{
    int n;
    float termo, soma = 0, fatorial = 1;

    do {
        printf("Digite o valor de n (apenas numeros positivos): ");
        scanf("%d", &n);
        if (n < 0) {
            continue;            // Reinicia o loop para solicitar novamente o valor de n
        }
        for (int i = 1; i <= n; i++){
            fatorial *= i;                       // Calcula o fatorial
            termo = (2 * i - 1) / fatorial;      // Calcula o termo atual da série
            soma += termo;                       // Adiciona o termo à soma total
        }
        printf("A soma da serie e: %.2f\n", soma);

    } while (n < 0);

    return 0;
}

