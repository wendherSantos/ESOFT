algoritmo "fOuM"
    Var letra: caractere
Inicio
    escreval("Insira a Letra:")
    leia(letra)
    se (letra = "F" ou "f") entao
        escreval ("Feminino")
    senao
        se (letra = "M" ou "m") entao
            escreval ("Masculino")
        senao
            escreval ("Letra inválida!")
        fimse
    fimse
fimalgoritmo