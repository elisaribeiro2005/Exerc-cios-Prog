#include <stdio.h>

int main()
{
    char vetor[10]; int i;

    printf("Digite um vetor com 10 posicoes de caracteres: ");  // Leitura do vetor de caracteres

        for(i = 0; i < 10; i ++)
        {
            scanf("%c" , &vetor[i]);
        }
        #include <stdio.h>

    printf("Vogais: ");              // Mostrar as vogais
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u')
            {
            printf("%c ", vetor[i]);
        }
    }
    printf("\n");

    printf("Consoantes: ");          // Mostrar as consoantes
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] != 'a' && vetor[i] != 'e' && vetor[i] != 'i' && vetor[i] != 'o' && vetor[i] != 'u' && vetor[i] >= 'a' && vetor[i] <= 'z')
        {
            printf("%c ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}
