#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float valorInvestido = 0;
    int periodo = 0;
    float percentualRendimento = 0;

    printf("Digite o valor investido\n");
    scanf("%f", &valorInvestido);
    printf("Digite a quantidade de meses do investimento\n");
    scanf("%d", &periodo);
    printf("Digite o percentual de rendimento ao mês\n");
    scanf("%f", &percentualRendimento);

    // Cálculo do Saldo

    float saldo = valorInvestido;
    float imposto = 0.15;

    for (int i = 1; i <= periodo; i++)
    {
        float rendimento = saldo * (percentualRendimento / 100); // Rendimento Mensal
        saldo += rendimento;                                     // Atualiza o saldo

        printf("Depois do mês %d, terá = R$%.2f\n", i, saldo);
    }

    float saldoFinal = saldo - (saldo - valorInvestido) * imposto;
    printf("\nValor Saldo Final = R$%.2f\n", saldo);
    printf("Valor Saldo Final - Imposto Retido na Fonte = R$%.2f\n", saldoFinal);
}
