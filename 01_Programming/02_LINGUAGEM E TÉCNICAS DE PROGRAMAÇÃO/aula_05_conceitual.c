#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero;
    printf("Digite um número: \n");
    scanf("%f", &numero);
    if(numero > 10){
        printf("Valor maior que 10.\n");
    }
}