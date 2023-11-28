algoritmo "calculaFesta"
    Var bebida: real
        comida: real
        decoracao: real
        qtidade_pessoas: inteiro
        custo: real

inicio
    escreval("Qual o custo com bebida?")
    leia(bebida)
    escreval("Qual o custo com comida?")
    leia(comida)
    escreval("Qual o custo com decoração?")
    leia(decoracao)
    escreval("Qual a quantidade de pessoas?")
    leia(qtidade_pessoas)
    
    custo <- (bebida + comida + decoracao) / qtidade_pessoas

    escreval("O custo por pessoa é: ", custo)

fimalgoritmo
