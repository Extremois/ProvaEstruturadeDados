#include <iostream>
#include "Q2.h"

int main()
{

    int n;
    Q2 *q2 = new Q2();

    std::cout << "Escolha o numero: " << std::endl;
    std::cin >> n;
    std::cout << "Soma dos numeros pares ate " << n << ":" << std::endl;
    std::cout << q2->SomaPar(n);

    return 0;
}