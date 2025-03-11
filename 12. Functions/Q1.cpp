// Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)

#include <iostream>
using namespace std;

bool isPalidrome(int n)
{
    int originalN = n, i = 1, temp = 0;

    while (n != 0)
    {
        i *= 10;
        n /= 10;
    }
    n = originalN;
    i /= 10;

    while (n != 0)
    {
        temp += (n % 10) * i;
        i /= 10;
        n /= 10;
    }
    if (temp == originalN)
    {
        return true;
    }
    return false;
}

int main()
{
    int n = 0;
    cout << "Enter num to check if is is palidrome: ";
    cin >> n;
    if (isPalidrome(n))
    {
        cout << n << " is palidrome";
    }
    else
    {
        cout << n << " is not palidrome";
    }
}