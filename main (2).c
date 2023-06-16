#include <stdio.h>

int main() 
{
    char palavra1[50];
    char palavra2[50];
    int i = 0;
    int j = 0;
    int igual = 0;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    
    while (palavra1[i] != '\0' || palavra2[j] != '\0')
    {
        if (palavra1[i] != palavra2[j])
        {
           igual=1;
        }
        i++;
        j++;
    }
    if (igual == 0 ) {
        printf("As palavras são iguais.\n");
    } else {
        printf("As palavras são diferentes.\n");
    }

    return 0;
}