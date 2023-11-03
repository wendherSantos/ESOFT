Algoritmo "Bubble Sort"
Var
    v: vetor [1..5] de inteiro
    i, j, aux: inteiro
Inicio

    Para i de 1 ate 5 faca
        Escreval("Escreva o n da posição ", i)
        leia(v[i])
    Fimpara

    Para i de 1 ate 5 faça
        Para j de 1 ate 5-i faça
            Se (v[j] > v[j+1]) entao
                aux <- v[j] 
                v[j] <- v[j+1]
                v[j+1] <- aux
            Fimse
        Fimpara
    Fimpara

    Para i de 1 ate 5 faca
        Escreva(v[i], ", ")
    Fimpara

Fimalgoritmo