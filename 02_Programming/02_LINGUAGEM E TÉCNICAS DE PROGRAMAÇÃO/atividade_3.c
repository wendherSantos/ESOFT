#include <stdio.h>
#include <stdlib.h>

void validarMeta(int dia1[3][3], int dia2[3][3])
{
    int meta;

    // 1. Fazer leitura de um valor de meta
    printf("Digite a meta por setor\n");
    scanf("%d", &meta);

    // 2. Somar os valores das duas matrizes
    int matrizTotal[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizTotal[i][j] = dia1[i][j] + dia2[i][j];
        }
    }

    // 3. Mostrar em formato de matriz a matriz total
    printf("Matriz Total:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrizTotal[i][j]);
        }
        printf("\n");
    }

    // 4. Escrever na tela os setores que alcançaram a meta
    printf("Setores que alcançaram a meta:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrizTotal[i][j] >= meta)
            {
                printf("Setor %d de %d alcançou a meta\n", (i + 1), (j + 1));
            }
        }
    }
}

int main()
{

    int dia1[3][3];
    int dia2[3][3];
    int i, j = 0;

    // Leitura da matriz no primeiro dia
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o total de pessoas do setor %d de %d\n", (i + 1), (j + 1));
            scanf("%d", &dia1[i][j]);
        }
    }
    // Leitura da matriz no segundo dia
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o total de pessoas do setor %d de %d\n", (i + 1), (j + 1));
            scanf("%d", &dia2[i][j]);
        }
    }
    // Ler a meta, somar matriz, escrever matriz total, escrever setores que alcançaram a meta
    validarMeta(dia1, dia2);
}