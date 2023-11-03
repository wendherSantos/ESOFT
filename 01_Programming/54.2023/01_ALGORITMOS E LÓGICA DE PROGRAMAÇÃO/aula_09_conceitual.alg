Algoritmo "par_ou_impar"
    Var numero: inteiro
        resto: inteiro

Inicio // Início
    leia(numero)
    resto <- numero % 2 // % > DIV
    Se (resto = 0) entao
        escreva("O número é par")
    Senão
        escreva("O número é ímpar")
    Fimse // Fimse > Fim_se
Fimalgoritmo // Fim
