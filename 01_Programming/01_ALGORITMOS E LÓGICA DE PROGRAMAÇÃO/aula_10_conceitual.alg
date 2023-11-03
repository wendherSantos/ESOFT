Algoritmo "notas"
    Var media: real
Inicio
    leia(media)
    Se(media >= 7.0) entao
        escreva("Aprovado")
    Senão
        Se(media >= 4.0) entao
            escreva("Exame")
        Senão
            escreva("Reprovado")
        Fimse
    Fimse
Fimalgoritmo