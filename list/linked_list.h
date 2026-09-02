Lista recebe_soma(Lista lista1, Lista lista2)
{
    Lista resultado = NULL;
    
    while (lista1 != NULL && lista2 != NULL)
    {
        if (lista1->dados.expoente == lista2->dados.expoente)
        {
            // Soma os coeficientes
            // inserir(resultado, coeficiente, expoente)

            lista1 = lista1->prox;
            lista2 = lista2->prox;
        }
        else if (lista1->dados.expoente > lista2->dados.expoente)
        {
            // Copia lista1
            // inserir(resultado, lista1->dados.coeficiente,
            //                  lista1->dados.expoente)

            lista1 = lista1->prox;
        }
        else
        {
            // Copia lista2
            // inserir(resultado, lista2->dados.coeficiente,
            //                  lista2->dados.expoente)

            lista2 = lista2->prox;
        }
    }

    // Copiar o restante de lista1

    // Copiar o restante de lista2

    return resultado;


}

typedef struct monomio{
    int coeficiente;
    int expoente;
}Monomio;

typedef struct polinomio{
    Monomio monomio;
    struct polinomio *prox;
}Polinomio;