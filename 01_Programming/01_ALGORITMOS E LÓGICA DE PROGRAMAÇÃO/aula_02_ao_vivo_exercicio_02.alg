algoritmo "calculaIMC"
    Var imc: real
        peso: real
        altura: real

inicio
    escreval("Informe o seu peso: ")
    leia(peso)
    escreval("Informe a sua altura: ")
    leia(altura)

    imc <- peso / (altura * altura)

    escreva("O seu IMC é: ", imc)

fimalgoritmo