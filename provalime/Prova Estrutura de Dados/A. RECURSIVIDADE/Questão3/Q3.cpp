#include <iostream>
#include "Q3.h"

int main(){
    
    int a, b;
    
    Q3 *q3 = new Q3();

    std::cout << "Escolha os numeros: " << std::endl;
    std::cin >> a >> b;
    std::cout << q3->Multi(a, b) << std::endl;




return 0;
}