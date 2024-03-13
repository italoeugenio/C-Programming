#include <stdio.h>
#include <stdlib.h>

int main (void){

    int idade;

    printf("Favor informar a idade:");
    scanf("%i", &idade);

    if(idade >= 18){
        printf("Bebidas liberadas +18");
    } else {
        printf("Infelizmente voce e de menor");
    }
    return 0;
}