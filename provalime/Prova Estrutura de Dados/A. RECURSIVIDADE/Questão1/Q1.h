#include <iostream>

class Q1
{

public:
    Q1() {

    };

    ~Q1() {

    };

    int F1(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return n * F1(n - 1);
        }
    }

    int F2(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        if (n == 1)
        {
            return 1;
        }
        else
        {
            return F2(n - 1) + 2 * F2(n - 2);
        }
    }

    void F3(int n)
    {
        if (n == 0)
        {
            std::cout << "ZERO!" << std::endl;
        }
        else
        {
            std::cout << n;
            std::cout << n;

            F3(n - 1);
        }
    }
};
