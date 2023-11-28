algoritmo "exemploRegistros"
    Tipo
        produto = registro
        codigo: inteiro
        nome: Vetor[1..50] de caractere
        quantidade: inteiro
        valor: real
    Fim_registro
    Var
        p1: produto
Inicio
    escreval("Digite o código:")
    leia(p1.codigo)
    escreval("Insira o valor:")
    leia(p1.valor)
fimalgoritmo