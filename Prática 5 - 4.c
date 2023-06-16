#include <stdio.h>

int main()
{
    int vetor[50];
    int i;
    for(i = 0; i < 50; i++)
    {
        vetor[i] = ( i + 5 * i) % ( i + 1);
    }
    for (i = 0; i < 50; i ++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
