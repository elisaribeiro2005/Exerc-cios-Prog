/*   13. Faça um programa que receba uma string no formato “DD/MM/AAAA” e copie o dia, mes e
ano para 3 variaveis inteiras. Antes disso, verifique se as barras estao no lugar certo, e se DD,
MM e AAAA sao numericos.  */

#include <stdio.h>

int main() {
    char data[10];
    int dia, mes, ano;

    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%10s", data);

    if (data[2] != '/' || data[5] != '/') {     // Verificar se as barras estão no lugar certo
        printf("Data invalida!\n");
        return 0;
    }
    dia = (data[0] - '0') * 10 + (data[1] - '0');    // Converter dia para inteiro
    mes = (data[3] - '0') * 10 + (data[4] - '0');    // Converter mês para inteiro
    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');  // Converter ano para inteiro
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0) {     // Verificar se DD, MM e AAAA são numéricos e válidos
        printf("Data invalida!\n");
        return 0;
    }

    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}