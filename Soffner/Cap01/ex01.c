/*Construa um algoritmo que calcule o valor do comprimento da circunferência, a partir do valor
do raio.*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float raio;
    float circunferencia;
    
    printf("Digite o valor do raio para descobrir a circunferencia: ");
    scanf("%f", &raio);
    
    circunferencia = pow(raio,2) * 3.14;
    printf("\nO valor da circunferencia e´ %.2f m2", circunferencia);
}