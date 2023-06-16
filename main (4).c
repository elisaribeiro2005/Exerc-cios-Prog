#include <stdio.h>

struct Hora {
    int horas;
    int minutos;
    int segundos;
};

int main() {
    struct Hora tempo;

    printf("Digite a hora: ");
    scanf("%d", &tempo.horas);

    printf("Digite os minutos: ");
    scanf("%d", &tempo.minutos);

    printf("Digite os segundos: ");
    scanf("%d", &tempo.segundos);

    printf("\nValores armazenados na estrutura Hora:\n");
    printf("Horas: %d\n", tempo.horas);
    printf("Minutos: %d\n", tempo.minutos);
    printf("Segundos: %d\n", tempo.segundos);

    return 0;
}
