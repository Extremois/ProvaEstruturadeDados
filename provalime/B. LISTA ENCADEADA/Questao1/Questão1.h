#include <iostream>
#include <stdlib.h>

#define MAX 100

using namespace std;

struct Bloco
{

    int valor;
    int endereco;
    Bloco *prox;
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
        if (NBloco == MAX)
        {
            std::cout << "Lista cheia!" << std::endl;
            return -1;
        }

        else
        {
            if (head == NULL)
            {
                Bloco *novo = new Bloco();
                novo->valor = valor;
                novo->endereco = 1;
                novo->prox = NULL;

                head = novo;
                NBloco++;
            }
            else
            {
                Bloco *aux = head;
                while (aux->prox != NULL)
                {
                    aux = aux->prox;
                }

                Bloco *novo = new Bloco();
                novo->valor = valor;
                novo->endereco = NBloco+1;
                novo->prox = NULL;

                aux->prox = novo;
                NBloco++;
            }
        }
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


    void Imprimir(Bloco *inicio){
       if (inicio == NULL && NBloco == 0){
            std::cout << "Lista vazia!" << std::endl;
            return;
        }
        if (inicio != NULL)
        {
            std::cout << "Valor: " << inicio->valor << " Endereco: " << inicio->endereco << std::endl;
            Imprimir(inicio->prox);            
        }
    }
      
    int Tamanho(){
        return NBloco;
    }

    int Excluir(Bloco *inicio, int valor){
        if (inicio == NULL && NBloco == 0){
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
        } else if (inicio->prox->valor == valor)
        {
            Bloco *aux = inicio->prox;
            inicio->prox = inicio->prox->prox;
            delete aux;
            NBloco--;
            ReorganizarEnderecos(inicio);
            return 0;
        }else if (inicio->prox != NULL)
        {
            return Excluir(inicio->prox, valor);
        }
        return 0;
    }

    void ReorganizarEnderecos(Bloco *inicio){
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