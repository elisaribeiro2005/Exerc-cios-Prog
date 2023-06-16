#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2) {
    if (A == 0) {
        return 0;
    }
    float delta = (B * B) - (4 * A * C);
    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *X1 = -B / (2 * A);
        return 1;
    } else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}

int main() {
    float A, B, C, X1, X2;
    printf("Digite o A: ");
    scanf("%f", &A);
    printf("Digite o B: ");
    scanf("%f", &B);
    printf("Digite o C: ");
    scanf("%f", &C);

    int numRaizes = raizes(A, B, C, &X1, &X2);

    printf("O numero de raizes e: %d\n", numRaizes);
    if (numRaizes >= 1) {
        printf("X1 = %f\n", X1);
    }
    if (numRaizes == 2) {
        printf("X2 = %f\n", X2);
    }

    return 0;
}