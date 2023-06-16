/*  25. FaÇa uma funÇao que recebe 3 valores inteiros por parametro e retorna-os ordenados em ordem
crescente. Utilize a passagem de parametros por referencia. */


#include <stdio.h>

void ordenarCrescente(int* a, int* b, int* c) {
    int temp;
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
        if (*a > *b) {
            temp = *a;
            *a = *b;
            *b = temp;
        }
    }
}
int main() {
    int num1, num2, num3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);
    ordenarCrescente(&num1, &num2, &num3);
    printf("Valores em ordem crescente: %d, %d, %d\n", num1, num2, num3);

    return 0;
}