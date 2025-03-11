// What’ll be the output of the following programs :
#include <iostream>
using namespace std;

int main()
{
    {
        // A:

        int x = 2, y = 5;
        int exp1 = (x * y / x);
        int exp2 = (x * (y / x));
        cout << exp1 << ",";
        cout << exp2 << "\n";
        // 5, 4
    }

    { // B:
        int x = 10, y = 5;
        int exp1 = (y * (x / y + x / y));   // 20
        int exp2 = (y * x / y + y * x / y); // 20
        cout << exp1 << " ";
        cout << exp2 << "\n";
    }
    { // C:
        int x = 200, y = 50, z = 100;
        if (x > y && y > z) //true && false = false
        {
            cout << "Hello \n";
        }
        if (z > y && z < x) // true && true = true
        {
            cout << "C++ \n";
        }
        if ((y + 200) < x && (y + 150) < z) //true && false = false
        {
            cout << "Hello C++ \n";
        }
    }
}
//15ft* 15ft = 6858 cm2   d = 7.5 cm     area = 23.56 
// r = 3.75
// r2 = 14
// area = 44