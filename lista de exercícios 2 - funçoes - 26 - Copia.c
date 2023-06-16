/* 26. Faca um programa que utilizara uma estrutura que ira armazenar as coordenadas x e y de um
dado Ponto. Faca a leitura de dois pontos e crie uma funçao que, recebendo dois pontos como
parametro, retorne a distancia euclidiana entre eles. Dist = (sqrt((p1.x − p2.x)² + (p1.y − p2.y)².
Para realizar o calculo da raiz quadrada utilize a funÇao sqrt(num) e para realizar a potenciaÇao
utilize a funçao pow(num, exp). Exemplo: sqrt(81) = 9 pow(2, 4) = 16 */

#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

float calcularDistancia(Ponto p1, Ponto p2) {
    float distancia = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    return distancia;
}

int main() {
    Ponto ponto1, ponto2;

    printf("Digite as coordenadas do primeiro ponto:\n");
    printf("Coordenada x: ");
    scanf("%f", &ponto1.x);
    printf("Coordenada y: ");
    scanf("%f", &ponto1.y);
    printf("Digite as coordenadas do segundo ponto:\n");
    printf("Coordenada x: ");
    scanf("%f", &ponto2.x);
    printf("Coordenada y: ");
    scanf("%f", &ponto2.y);
    float distancia = calcularDistancia(ponto1, ponto2);
    printf("A distância euclidiana entre os pontos é: %.2f\n", distancia);

    return 0;
}