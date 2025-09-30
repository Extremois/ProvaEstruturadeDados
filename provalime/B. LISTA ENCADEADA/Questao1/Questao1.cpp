#include <iostream>
#include "Questão1.h"

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
    cout << "1 - Criar Lista Vazia" << endl;
    cout << "2 - Inserir um elemento da lista" << endl;
    cout << "3 - Imprimir o conteudo da lista" << endl;
    cout << "4 - Retornar o número de elementos na lista" << endl;
    cout << "5 - Buscar um elemento especifico na lista" << endl;
    cout << "6 - Excluir um elemento da lista." << endl;
    cout << "7 - Excluir a lista." << endl;
    cout << "0 - Sair" << endl;
    cout << "==============================" << endl;
    cout << "Escolha uma opcao: " << endl;
    cin >> opcao;
        switch (opcao)
        {
            case 1:

            if (L != nullptr) {
            delete L; 
            L = nullptr;
            }

            L = new Lista();
            cout << "Lista criada com sucesso!" << endl;
            system("pause");
            break;


            case 2:
            cout << "Escolha o valor a ser inserido: " << endl;
            cin >> valor;
            L->Inserir(valor);
            break;

            case 3:
            L->Imprimir(L->head);
            system("pause");
            break;
            
            
            case 4:
            L->Tamanho();
            break;

            case 5:
            cout << "Escolha o valor a ser buscado: " << endl;
            cin >> valor;    
            std::cout << "Esta no endereco: "<< L->Buscar(L->head, valor) << endl;
            system("pause");
            break;
            
            case 6:
            cout << "Escolha o valor a ser excluido: " << endl;
            cin >> valor;
            L->Excluir(L->head, valor);
            system("pause");
            break;

            case 7:
            delete L;
            cout << "Lista excluida com sucesso!" << endl;
            system("pause"); 
            break;
            
            
            default:
            break;
        }
    } while (opcao != 0);
    system("pause");
    
        


    return 0;
}