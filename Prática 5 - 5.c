#include <stdio.h>

int main() {
    float vetor[15]; int cod, i;

    printf("Digite 15 numeros reais:\n");  // Leitura do vetor

    for (i = 0; i < 15; i++)
    {
        scanf("%f", &vetor[i]);
    }
    printf("Digite o codigo (1: ordem direta, 2: ordem inversa):\n");  // Leitura do código
    scanf("%d", &cod);

    switch (cod)                          // Impressão do vetor de acordo com o código
    {
        case 1:
            printf("Vetor na ordem direta: ");
            for (i = 0; i < 15; i++)
            {
                printf("%.2f ", vetor[i]); }
            break;
        case 2:
            printf("Vetor na ordem inversa: ");
            for (i = 14; i >= 0; i--)
            {
                printf("%.2f ", vetor[i]); }
            break;
        default:
            printf("O codigo é invalido");
            break;
    }

    return 0;
}
