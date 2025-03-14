// ***REMAINING***

// Following are the rules of adding 2 binary digits :

// 0 + 0 = 0, carry = 0
// 1 + 0 = 1, carry = 0
// 0 + 1 = 1, carry = 0
// 1 + 1 = 0, carry = 1

// So, in math if 2 + 3 = 5, in binary it looks like
//   1 0
// + 1 1
// _____
// 1 0 1

// Using this method, try to add these 2 numbers (63 & 22) in their binary form and verify that the binary output is equal to the decimal value 85.

#include <iostream>
using namespace std;

int decToBin(int n)
{
    int binNum = 0, pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        binNum += rem * pow;
        pow *= 10;
        n /= 2;
    }
    return binNum;
}

int binAdd(int a, int b){
    //we have to add a and b, but in binary form

    return (a > b) ? a : b;
    
}

int main()
{
    int a = 0, b = 0;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    int aBin = decToBin(a);
    int bBin = decToBin(b);

    cout << "a " << aBin << "\n"
         << "b " << bBin << endl;

    cout << "Addtion  of bin : " << decToBin(binAdd(aBin, bBin));
}