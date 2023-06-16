#include <stdio.h>

int main()
{
char nome[51]; 
int tamanho = 0; 

printf("Digite o seu nome completo (até 50 caracteres): ");
scanf("%s",nome); 
while (nome[tamanho] != '\0' && tamanho < 50) {
    tamanho++;
}

printf("O tamanho da string fornecida é: %d\n", tamanho);

return 0;
}

