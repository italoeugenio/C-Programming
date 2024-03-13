/*3. Desenhe um algoritmo que receba dois números e mostre a soma, a subtração, a multiplicação e
a divisão dos números.*/

#include <stdio.h>

int main(void) {
    
    float num1;
    float num2;
    float soma;
    float subtracao;
    float mutiplicacao;
    float divisao;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    soma = num1 + num2;
    subtracao = num1 - num2;
    mutiplicacao = num1 * num2;
    divisao = num1 / num2;
    
    printf("O resultado da soma foi %.2f\n", soma);
    printf("O resultado da subtracao foi %.2f\n", subtracao);
    printf("O resultado da mutiplicacao foi %.2f\n", mutiplicacao);
    printf("O resultado da divisao foi %.2f\n", divisao);
}