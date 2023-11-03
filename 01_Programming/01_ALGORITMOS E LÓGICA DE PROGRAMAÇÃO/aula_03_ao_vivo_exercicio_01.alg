algoritmo "multiplicaOuSubtrai"
    Var     A: inteiro
            B: inteiro
            resultado: inteiro
Inicio 
    escreval("Insira os dados:")
    leia(A)
    leia(B)
    se (A = B) entao
        resultado <- A * B
    senao
        resultado <- A + B
    fimse
    escreva(resultado)
fimalgoritmo