/*  21. Faça uma funçao que recebe os coeficientes de uma equaçao do segundo grau e retorna o valor
de delta. */

#include <stdio.h>
#include <math.h>

float calcularDelta(float A, float B, float C) {
    return (B * B) - (4 * A * C);
}

int main() {
    float coefA, coefB, coefC;
    float delta;

    printf("Digite os coeficientes da equacao do segundo grau:\n");
    printf("Coeficiente A: ");
    scanf("%f", &coefA);
    printf("Coeficiente B: ");
    scanf("%f", &coefB);
    printf("Coeficiente C: ");
    scanf("%f", &coefC);
    delta = calcularDelta(coefA, coefB, coefC);
    printf("O valor de delta e: %.2f\n", delta);

    return 0;
}
