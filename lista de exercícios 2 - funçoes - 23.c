/* 23. Faca uma funço que recebe a idade de um nadador por parametro e retorna, tambem por
parametro, a categoria desse nadador de acordo com a tabela abaixo:

                      Idade                 Categoria
                    0 a 7 anos              Infantil A
                    8 a 10 anos             Infantil B
                    11 a 13 anos            Juvenil A
                    14 a 17 anos            Juvenil B
            Maiores de 18 anos (inclusive)  Adulto  */

#include <stdio.h>
#include <string.h>

void determinarCategoria(int idade, char *categoria) {
    if (idade >= 0 && idade <= 7) {
        strcpy(categoria, "Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        strcpy(categoria, "Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        strcpy(categoria, "Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        strcpy(categoria, "Juvenil B");
    } else {
        strcpy(categoria, "Adulto");
    }
}

int main() {
    int idade;
    char categoria[20];

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    determinarCategoria(idade, categoria);

    printf("Categoria do nadador: %s\n", categoria);

    return 0;
}