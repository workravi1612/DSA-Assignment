// WAP to find the Factorial of a number entered by the user.

#include <iostream>
using namespace std;

int main()
{
    int n = 0, fact = 1;
    cout << "Enter a number to get its factorial: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact;
}