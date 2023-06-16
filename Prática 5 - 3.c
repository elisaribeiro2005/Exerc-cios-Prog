#include <stdio.h>

int main()
{
    int numeros[10];
    int i, q2 = 0, q3 = 0, q5 = 0;

    for (int i = 0; i < 10; i++){
        do{
            printf("Digite um numero entre 0 e 9: ");
            scanf("%d", &numeros[i]);
        }
        while (numeros[i] < 0 || numeros[i] > 9);
        switch (numeros[i])
        {
            case 2:
                q2++;
                break;
            case 3:
                q3++;
                break;
            case 5:
                q5++;
                break;
            default:
                break;
        }
    }
    printf("Quantidade de numeros 2: %d\nQuantidade de numeros 3: %d\nQuantidade de numeros 5: %d\n", q2, q3, q5);

    return 0;
}
