#include <iostream>
#include "Questao3.h"

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
    cout << "1 - Inserir elementos" << endl;
    cout << "2 - Retirar elementos" << endl;
    cout << "3 - Imprimir elementos" << endl;
    cout << "0 - Sair" << endl;
    cout << "==============================" << endl;
    cout << "Escolha uma opcao: " << endl;
    cin >> opcao;
        switch (opcao)
        {
            case 1:
            cout << "Escolha o valor a ser inserido: " << endl;
            cin >> valor;
            L->Inserir(valor);
            system("pause");
            break;

            
            case 2:
            cout << "Escolha o valor a ser retirado: " << endl;
            cin >> valor;
            L->Excluir(L->head, valor);
            system("pause");    
            break;
            
            case 3:
            L->Imprimir(L->head);
            system("pause");
            break;

            case 0:
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