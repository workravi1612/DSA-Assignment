// Convert the following binary numbers into decimal forms :
// ● 111111
// ● 10110
// ● 10011
// ● 110010

#include <iostream>
using namespace std;

int getDec(int bin)
{
    int i = 1, temp = 0;
    while (bin != 0)
    {
        temp += (bin % 10) * i;
        i *= 2;
        bin /= 10;
    }
    return temp;
}

int main()
{
    int bin = 0;
    cout << "Enter bin num to get decimal: ";
    cin >> bin;
    cout << getDec(bin);
}