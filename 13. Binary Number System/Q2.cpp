// Convert the following decimal numbers into binary forms :
// ● 25
// ● 49
// ● 31
// ● 88

#include <iostream>
using namespace std;

int getBin(int n)
{
    // MY LOGIC

    // int temp = 0, i = 1, sum = 0;
    // while (n != 1)
    // {
    //     temp = 0;
    //     if (n % 2 != 0)
    //     {
    //         n /= 2;
    //         temp = 1;
    //     }
    //     else
    //     {
    //         n /= 2;
    //     }
    //     sum += (temp * i);
    //     i *= 10;
    //     if (n == 1)
    //     {
    //         sum += i;
    //     }
    // }
    // return sum;

    // APNA CLG LOGIC
    int pow = 1, binNum = 0;
    while (n > 0)
    {
        int rem = n % 2;
        binNum += rem * pow;
        n /= 2;
        pow *= 10;
    }
    return binNum;
}

int main()
{
    int n = 0;
    cout << "Enter decimal number to get binary: ";
    cin >> n;

    cout << getBin(n);
}