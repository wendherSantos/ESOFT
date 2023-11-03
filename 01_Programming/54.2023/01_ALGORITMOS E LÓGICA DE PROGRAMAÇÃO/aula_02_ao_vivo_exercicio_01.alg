algoritmo "media4notas"
    Var nota1: real
        nota2: real
        nota3: real
        nota4: real
        media: real
        
inicio
    escreval("Usuário, informe a nota 1:")
    leia(nota1)
    escreval("Usuário, informe a nota 2:")
    leia(nota2)
    escreval("Usuário, informe a nota 3:")
    leia(nota3)
    escreval("Usuário, informe a nota 4:")
    leia(nota4)

    media <- (nota1 + nota2 + nota3 + nota4) / 4

    escreva("O resultado do cálculo é: ", media)

fimalgoritmo