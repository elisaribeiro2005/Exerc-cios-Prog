#include <stdio.h>

int main()
{
    float num, soma = 0;

    do {
        printf("Digite um numero (ou um numero negativo para sair): ");
        scanf("%f", &num);
        
        if (num >= 0) {
            for (float i = 1; i <= num; i++) {
                soma += 1 / i;
            }
            printf("A soma e: %.2f\n", soma);
        }} 
    while (num >= 0);

return 0;
}
