#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura para armazenar informações do atendimento
struct Atendimento
{
    char nome[50];
    char cpf[15];
    int tipoAtendimento;
};

// Função para cadastrar um novo atendimento
void cadastrarAtendimento(struct Atendimento atendimentos[], int *contador)
{
    printf("Opção - Solicitar Atendimento");
    printf("\nDigite o seu nome: ");
    scanf("%s", atendimentos[*contador].nome);

    printf("Digite o CPF do cliente: ");
    scanf("%s", atendimentos[*contador].cpf);

    printf("Escolha o tipo de atendimento:\n");
    printf("1 - Abertura de Conta\n");
    printf("2 - Caixa\n");
    printf("3 - Gerente Pessoa Física\n");
    printf("4 - Gerente Pessoa Jurídica\n");
    printf("Opção: ");
    scanf("%d", &atendimentos[*contador].tipoAtendimento);

    (*contador)++;
}

// Função para listar todos os atendimentos registrados
void listarAtendimentos(struct Atendimento atendimentos[], int contador)
{
    printf("\nOpção - Listar Atendimentos Registrados");
    printf("\nLista de Atendimentos Registrados:\n");
    for (int i = 0; i < contador; i++)
    {
        printf("Nome: %s\n", atendimentos[i].nome);
        printf("CPF: %s\n", atendimentos[i].cpf);
        printf("Tipo Atendimento: %d - ", atendimentos[i].tipoAtendimento);

        switch (atendimentos[i].tipoAtendimento)
        {
        case 1:
            printf("Abertura de Conta");
            break;
        case 2:
            printf("Caixa");
            break;
        case 3:
            printf("Gerente Pessoa Física");
            break;
        case 4:
            printf("Gerente Pessoa Jurídica");
            break;
        default:
            printf("Tipo de atendimento inválido");
        }

        printf("\n===============================\n");
    }
}

// Função para listar atendimentos por tipo
void listarAtendimentoPorTipo(struct Atendimento atendimentos[], int contador)
{
    int tipoEscolhido;

    printf("\nDigite uma das opções de atendimento: ");
    printf("\n1 - Abertura de Conta");
    printf("\n2 - Caixa");
    printf("\n3 - Gerente Pessoa Física");
    printf("\n4 - Gerente Pessoa Jurídica");
    scanf("%d", &tipoEscolhido);

    printf("\nAtendimentos do tipo %d:\n", tipoEscolhido);
    for (int i = 0; i < contador; i++)
    {
        if (atendimentos[i].tipoAtendimento == tipoEscolhido)
        {
            printf("Nome: %s\n", atendimentos[i].nome);
            printf("CPF: %s\n", atendimentos[i].cpf);
            printf("Tipo Atendimento: %d\n", atendimentos[i].tipoAtendimento);
            printf("===============================\n");
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct Atendimento atendimentos[100];
    int opcao, contador = 0;

    do
    {
        printf("\n===============================\n");
        printf("\nBem-vindo ao sistema de atendimento\n");
        printf("\nDigite uma das opções\n");
        printf("1 - Solicitar Atendimento\n");
        printf("2 - Listar Atendimentos Registrados\n");
        printf("3 - Listar Atendimento por Setor\n");
        printf("4 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarAtendimento(atendimentos, &contador);
            break;
        case 2:
            listarAtendimentos(atendimentos, contador);
            break;
        case 3:
            listarAtendimentoPorTipo(atendimentos, contador);
            break;
        case 4:
            printf("Saindo do programa. Até logo!\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}