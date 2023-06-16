#include <stdio.h>

int main()
{
    int num, i, j = 0, h = 0;
    
    for (i = 1; i <= 200; i++) {
        printf("Digite o %d^ numero: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            j += 1;
        }
        else{
            h += 1;
        }
    }
    printf("Quantidade de numeros pares = %d\n", j);
    printf("Quantidade de numeros impares = %d\n", h);


return 0;
}