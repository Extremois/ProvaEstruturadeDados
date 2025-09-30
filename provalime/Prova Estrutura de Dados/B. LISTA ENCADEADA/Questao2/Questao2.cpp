#include <iostream>
#include "Questão2.h"

using namespace std;

int main(){

    int opcao, valor;

    Pilha *P = new Pilha();

    do
    {
    system("cls");
    cout << "==============================" << endl;
    cout << "MENU" << endl;
    cout << "==============================" << endl;
    cout << "1 - Inserir um elemento na Pilha" << endl;
    cout << "2 - Excluir um elemento da Pilha." << endl;
    cout << "3 - Imprimir o conteudo da Pilha" << endl;
    cout << "4 - Verificar se um dado elemento está presente na pilha" << endl;
    cout << "0 - Sair" << endl;
    cout << "==============================" << endl;
    cout << "Escolha uma opcao: " << endl;
    cin >> opcao;
        switch (opcao)
        {
            case 1:
            cout << "Escolha o valor a ser inserido: " << endl;
            cin >> valor;
            P->Inserir(valor);
            break;
            
            case 2:
            P->Excluir();
            system("pause");
            break;

            case 3:
            P->Imprimir(P->topo);
            system("pause");
            break;

            case 4:
            cout << "Escolha o valor a ser buscado: " << endl;
            cin >> valor;    
            P->Buscar(P->topo, valor);
            system("pause");
            break;
            
            default:
            break;
        }
    } while (opcao != 0);
    system("pause");
    
        


    return 0;
}