#include <iostream>

class Q3 {

    public:

        Q3() {

        };

        ~Q3() {

        };

        int Multi(int a, int b) {
            
            if(b == 1)
            {
                return a;
            }

            return a * (b - 1) + a;
        };
};