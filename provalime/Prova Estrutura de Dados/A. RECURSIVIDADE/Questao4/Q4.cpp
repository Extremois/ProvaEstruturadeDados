#include <iostream>
#include "Q4.h"

using namespace std;

int main(){

    int opcao, valor;
    
    Lista *L = new Lista();
    
    do
    {
    system("cls");
    cout << "==============================" << endl;
    cout << "MENU" << endl;
    cout << "==============================" << endl;
    cout << "1 - Imprimir o conteudo da lista" << endl;
    cout << "2 - Buscar um elemento especifico na lista" << endl;
    cout << "3 - Excluir um elemento da lista." << endl;
    cout << "4 - Inserir." << endl;
    cout << "0 - Sair" << endl;
    cout << "==============================" << endl;
    cout << "Escolha uma opcao: " << endl;
    cin >> opcao;
        switch (opcao)
        {
            case 1:
            L->Imprimir(L->head);
            system("pause");
            break;

            case 2:
            cout << "Escolha o valor a ser buscado: " << endl;
            cin >> valor;    
            std::cout << "Esta no endereco: "<< L->Buscar(L->head, valor) << endl;
            system("pause");
            break;
            
            case 3:
            cout << "Escolha o valor a ser excluido: " << endl;
            cin >> valor;
            L->Excluir(L->head, valor);
            system("pause");
            break;
            
            case 4:
            cout << "Escolha o valor a ser inserido: " << endl;
            cin >> valor;
            L->Inserir(valor);
            break;
            
            default:
            break;
        }
    } while (opcao != 0);
    system("pause");
    
        


    return 0;
}