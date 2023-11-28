algoritmo "somaElementos"
    var mat: Vetor[1..3, 1..3] de inteiro
        i: inteiro
        j: inteiro
        soma: inteiro

inicio
    soma <- 0
    para i de 1 ate 3 passo 1 faca
        para j de 1 ate 3 passo 1 faca
            soma <- soma + mat[i, j]
        fimpara
    fimpara
    escreva("A soma é ", soma)
fimalgoritmo