#include <stdio.h>
#include <stdlib.h>

int main (){

    int fatorial;
    int resposta = 1;

    printf("Digite um numero interio para saber o fatorial dele: ");
    scanf("%i", &fatorial);

    for (;fatorial >= 1; fatorial--)
    {
        resposta *= fatorial;
    }
    
    printf("O numero fatorial e %i", resposta);

    return 0;
}