#include <iostream>
#include <stdlib.h>

#define MAX 100

using namespace std;


struct No
{
    int valor;
    No *prox;
};


class Pilha
{
private:
    int NPilha;

public:
    No *topo;

    Pilha()
    {
        NPilha = 0;
        topo = NULL;
    };

    ~Pilha()
    {
        NPilha = 0;
    };

    int Inserir(int valor)
    {
        if (NPilha == MAX)
        {
            std::cout << "Pilha cheia!" << std::endl;
            return -1;
        }

        No *novo = new No();
        novo->valor = valor;
        novo->prox = topo;
        topo = novo;
        NPilha++;

        return 0;
    }

    int Buscar(No *inicio, int valor)
    {
        if (inicio == NULL && NPilha == 0)
        {
            std::cout << "Lista vazia!" << std::endl;
            return -1;
        }

        if (inicio->valor == valor)
        {
            std::cout << "Valor encontrado!" << std::endl;
            return 1;
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

    void Imprimir(No *inicio)
    {
        if (inicio == NULL && NPilha == 0)
        {
            std::cout << "Pilha vazia!" << std::endl;
            return;
        }
        if (inicio != NULL)
        {
            std::cout << "Valor: " << inicio->valor << std::endl;
            Imprimir(inicio->prox);
        }
    }

    int Excluir()
    {
        if (topo == NULL && NPilha == 0)
        {
            std::cout << "Lista vazia!" << std::endl;
            return -1;
        }
        No *aux = topo;
        topo = topo->prox;
        delete aux;
        NPilha--;
        return 0;
    }
};
