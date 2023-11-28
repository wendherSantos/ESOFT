// Exemplo 1

// Algoritmo  "meu_vetor"
//     Var notas: Vetor[1..4] de real
// Inicio
//     escreval("Digite a nota 1:")
//     leia(notas[1])
//     escreval("Digite a nota 2:")
//     leia(notas[2])
//     escreval("Digite a nota 3:")
//     leia(notas[3])
//     escreval("Digite a nota 4:")
//     leia(notas[4])
//     escreva(notas)
// Fimalgoritmo

// Exemplo 2

Algoritmo  "meu_vetor2"
    Var notas: Vetor[1..4] de real
        i: inteiro
Inicio
    Para i de 1 ate 4 passo 1 faca
        escreval("Digite a nota", i, ":")
        leia(notas[i])
    Fimpara
    escreva(notas)
Fimalgoritmo