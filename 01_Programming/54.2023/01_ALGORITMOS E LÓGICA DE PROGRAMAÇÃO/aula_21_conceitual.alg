algoritmo "conversao"
    Funcao convertePeso(quilos: real) : real
        Var gramas: real
    Inicio
        gramas <- quilos * 1000
        retorne gramas
    fimfuncao
    Var peso: real
        gra: real
Inicio
    escreval("Digite o peso em quilos:")
    leia(peso)
    gra <- convertePeso(peso)
    escreval("O peso, em gramas, é:", gra)
fimalgoritmo