#include <iostream>

class Q2
{

public:
    Q2() {

    };

    ~Q2() {

    };


    int SomaPar(int n)
{
    int soma = 0;
    if (n % 2 != 0)
    {
        n = n - 1;
    }

    if (n <= 0)
    {
        std::cout << "0 = ";
        return soma;
    }
    else{
        std::cout << n << " + ";
        return soma + n + SomaPar(n - 2);
    }
}

};