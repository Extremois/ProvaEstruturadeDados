#include <iostream>
#include "Questao3.h"

using namespace std;

REG EntraDado(REG x)
{
    cout << "Digite a chave do registro: ";
    cin >> x.chave;
    cout << "Digite a informacao do registro: ";
    cin >> x.info;
    return x;
}

Fila::Fila() // construtor da fila
{
    Inicio = NULL;
    Fim = NULL;
    TamanhoFila = 0;
    cout << "Fila criada" << endl;
    system("pause");
}

Fila::~Fila() // destrutor da fila
{
    cout << "Fila destruida" << endl;
}

bool Fila::FilaExiste()
{
    if (Inicio == NULL && Fim == NULL)
    {
        return false;
    }

    else
    {
        return true;
    }
}

void Fila::Inserir(REG x)
{
    NO *novo = new NO; // cria nova celula
    novo->dado = x;    // atribui o valor
    novo->prox = NULL; // proximo recebe NULL

    if (Inicio == NULL) // se a fila estiver vazia
    {
        Inicio = novo; // inicio recebe nova celula
        Fim = novo;    // fim recebe nova celula
        TamanhoFila++;
    }
    else // se a fila nao estiver vazia
    {
        Fim->prox = novo; // o proximo do fim recebe a nova celula
        Fim = novo;       // fim recebe a nova celula
        TamanhoFila++;
    }
    cout << "Dado inserido na fila" << endl;
    system("pause");
}

void Fila::RemoverDado()
{
    NO *aux; // var auxuliar

    if (Inicio == NULL) // se a fila estiver vazia
    {
        cout << "Fila vazia" << endl;
        system("pause");
    }
    else
    {
        aux = Inicio;
        cout << "O dado '" << aux->dado.info << "'foi removido da fila" << endl;
        Inicio = Inicio->prox; // o inicio da fila sera o proximo
        TamanhoFila--;
        delete aux;
    }
}

void Fila::ConsultarDado(int chave)
{
    NO *aux; // var auxuliar

    if (Inicio == NULL) // se a fila estiver vazia
    {
        cout << "Fila vazia" << endl;
        system("pause");
    }
    else
    {
        aux = Inicio;
        do
        {
            if (aux->dado.chave == chave)
            {
                cout << "Dado encontrado: " << aux->dado.info << endl;
                system("pause");
                return;
            }
            aux = aux->prox; // vai passando pro prox dele ate que ele seja nulo
        } while (aux != NULL);

        cout << "Dado nao encontrado" << endl;
        system("pause");
    }
}

void Fila::ImprimirFila()
{
    NO *aux;

    if (Inicio == NULL)
    {
        cout << "Fila vazia" << endl;
    }
    else
    {
        cout << "Tamanho da fila: " << TamanhoFila << endl;
        aux = Inicio;
        do
        {
            cout << aux->dado.info << endl; // printa o dado
            aux = aux->prox;
        } while (aux != NULL); // vai passando pro prox dele ate que ele seja nulo
    }
}

int Fila::Menu()
{
    int opc;
    cout << "=============================================================" << endl;
    cout << " ESCOLHA UM ITEM NO MENU ABAIXO " << endl;
    cout << "=============================================================" << endl;
    cout << " [1] INSERIR REGISTRO " << endl;
    cout << " [2] LISTAR DADOS " << endl;
    cout << " [3] CONSULTAR REGISTRO " << endl;
    cout << " [4] EXCLUIR REGISTRO " << endl;
    cout << " [5] SAIR DO PROGRAMA " << endl;
    cout << "=============================================================" << endl;
    cout << "OPCAO: ";
    cin >> opc;
    return opc;
}

REG D;
NO *C1;

int main()
{
    int opc, tam, chave;

    Fila *F1 = new Fila(); // instancia a fila

    do
    {
        system("cls");
        opc = F1->Menu();

        switch (opc)
        {
        case 1:
            tam = F1->TamanhoFila;
            D = EntraDado(D); // armazena o dado na variavel D
            F1->Inserir(D);   // chama a funçao e insere o dado
            break;

        case 2:
            F1->ImprimirFila(); // chama a funçao e imprime a fila
            system("pause");
            break;

        case 3:
            cout << "Digite a chave do registro que deseja consultar: ";
            cin >> chave;
            F1->ConsultarDado(chave); // funcao de consultar dado
            break;
            
        case 4:
            cout << "Removendo o dado do inicio da fila..." << endl;
            F1->RemoverDado(); // chama a funçao e remove o dado
            system("pause");
            break;
        
        case 5:
            delete F1; // destroi a fila
            break;
        }
    } while (opc != 5);
}