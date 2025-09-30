void ListaDupla::InserirInicioLD(int k)
{ NO *novo;
    novo = new NO;
    novo->info = k;
    novo->ant = NULL;
    if(ListaVaziaLD()){
        novo->prox = NULL;
        inicio = fim = novo;
        tamanho++;
    }
    else{
        while (inicio->prox != NULL)
        {
            if (inicio->info == k)
            {
                std::cout << "Valor ja existe na lista!" << endl;
                return;
            }
            inicio = inicio->prox;
        }
        novo->prox = inicio;
        inicio->ant = novo;
        inicio = novo;
        tamanho++;
    }
}