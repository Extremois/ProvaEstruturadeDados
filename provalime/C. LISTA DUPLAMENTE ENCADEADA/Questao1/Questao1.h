#include <iostream>
#include <stdlib.h>

#define MAX 100

using namespace std;

struct Bloco
{

    int valor;
    int endereco;
    Bloco *prox;
    Bloco *ant;
};

class Lista
{

private:
    int NBloco;

public:
    Bloco *head;

    Lista()
    {
        NBloco = 0;
        head = NULL;
    };

    ~Lista()
    {
        NBloco = 0;
    };
    
    int Inserir(int valor)
    {
        int pos;

        if (NBloco == MAX)
        {
            std::cout << "Lista cheia!" << std::endl;
            return -1;
        }

        std::cout << "Escolha a posicao: ";
        std::cin >> pos;

        Bloco *novo = new Bloco();
        novo->valor = valor;
        novo->endereco = pos;
        novo->prox = nullptr;
        novo->ant = nullptr;

        if (head == NULL)
        {
            head = novo;
            NBloco++;
            return 0;
        }

        Bloco *aux = head;


        if (pos <= head->endereco)
        {
            novo->prox = head;
            head->ant = novo;
            head = novo;
            NBloco++;
            return 0;
        }


        while (aux->prox != NULL && aux->prox->endereco < pos)
        {
            aux = aux->prox;
        }


        novo->prox = aux->prox;
        if (aux->prox != NULL)
        {
            aux->prox->ant = novo;
        }
        novo->ant = aux;
        aux->prox = novo;

        NBloco++;
        return 0;
    }

    int Buscar(Bloco *inicio, int valor)
    {
        if (inicio == NULL && NBloco == 0)
        {
            std::cout << "Lista vazia!" << std::endl;
            return -1;
        }

        if (inicio->valor == valor)
        {
            return inicio->endereco;
        }
        else if (inicio->prox != NULL)
        {
            return Buscar(inicio->prox, valor);
        }
        else
        {
            std::cout << "Valor nao encontrado!" << std::endl;
            return -1;
        }
    }

    void Imprimir(Bloco *inicio)
    {
        if (inicio == NULL && NBloco == 0)
        {
            std::cout << "Lista vazia!" << std::endl;
            return;
        }
        if (inicio != NULL)
        {
            std::cout << "Valor: " << inicio->valor << " Endereco: " << inicio->endereco << std::endl;
            Imprimir(inicio->prox);
        }
    }

    int Tamanho()
    {
        return NBloco;
    }

    int Excluir(Bloco *inicio, int valor)
    {
        if (inicio == NULL && NBloco == 0)
        {
            std::cout << "Lista vazia!" << std::endl;
            return -1;
        }

        if (head->valor == valor)
        {
            Bloco *aux = head;
            head = head->prox;
            delete aux;
            NBloco--;
            ReorganizarEnderecos(inicio);
            return 0;
        }
        else if (inicio->prox->valor == valor)
        {
            Bloco *aux = inicio->prox;
            inicio->prox = inicio->prox->prox;
            delete aux;
            NBloco--;
            ReorganizarEnderecos(inicio);
            return 0;
        }
        else if (inicio->prox != NULL)
        {
            return Excluir(inicio->prox, valor);
        }
        return 0;
    }

    void ReorganizarEnderecos(Bloco *inicio)
    {
        if (inicio->prox != NULL)
        {
            if (inicio->prox->endereco - inicio->endereco != 1)
            {
                inicio->prox->endereco = inicio->endereco + 1;
            }
            ReorganizarEnderecos(inicio->prox);
        }
    }
};