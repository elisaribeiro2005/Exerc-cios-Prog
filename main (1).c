#include <stdio.h>
#include <string.h>

int main() {
    char nome[51]; 

    printf("Digite o seu nome completo (até 50 caracteres): ");
    scanf("%s",nome); 

    int tamanho = strlen(nome); 
    printf("O tamanho da string fornecida é: %d\n", tamanho);

    return 0;
}
