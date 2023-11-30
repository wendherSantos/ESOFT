#include <stdio.h>
#include <stdlib.h>

// int main(){
//     float notas[4];
//     printf("Digite a nota 1: \n");
//     scanf("%f", &notas[0]);
//     printf("Digite a nota 2: \n");
//     scanf("%f", &notas[1]);
//     printf("Digite a nota 3: \n");
//     scanf("%f", &notas[2]);
//     printf("Digite a nota 4: \n");
//     scanf("%f", &notas[3]);
// }

int main(){
    float notas[4];
    int i;
    for(i=0; i<4; i++){
        printf("Digite a nota %d: \n", i+1);
        scanf("%f", &notas[i]);
    }
}