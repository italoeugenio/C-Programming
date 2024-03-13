/*2. Desenhe um algoritmo que receba dois números e exiba o resultado da sua soma.*/

#include <stdio.h>

int main(void) {
    
    float num1;
    float num2;
    float soma;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    soma = num1 + num2;
    
    printf("O resultado da soma foi %.2f", soma);
    
}