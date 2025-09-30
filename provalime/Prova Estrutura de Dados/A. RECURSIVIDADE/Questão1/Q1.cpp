#include <iostream>
#include "Q1.h"

int main(){

    Q1 *q1 = new Q1();

    std::cout << "====================\n" << std::endl;
    std::cout << "Questao 1" << std::endl;
    std::cout << "\n====================" << std::endl;

    std::cout << "Funcao 1\n"<< std::endl;
    std::cout << "Entradas:\n"<< std::endl;
    std::cout << "f1(0): " << q1->F1(0) << std::endl;
    std::cout << "f1(1): " << q1->F1(1) << std::endl;
    std::cout << "f1(5): " << q1->F1(5) << std::endl;

    std::cout << "\n====================" << std::endl;

    std::cout << "Funcao 2\n"<< std::endl;
    std::cout << "Entradas:\n"<< std::endl;
    std::cout << "f2(0):\n" << q1->F2(0) << std::endl;
    std::cout << "f2(1):\n" << q1->F2(1) << std::endl;
    std::cout << "f2(5):\n" << q1->F2(5) << std::endl;
    std::cout << "\n====================" << std::endl;

    std::cout << "Funcao 3\n"<< std::endl;
    std::cout << "Entradas:\n"<< std::endl;
    std::cout << "f3(0):\n";
    q1->F3(0);
    std::cout << "f3(1):\n";
    q1->F3(1);
    std::cout << "f3(5):\n";
    q1->F3(5);


    return 0;
}   