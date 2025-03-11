// For a positive N , WAP that prints the first N Fibonacci numbers.
// (Assume N >= 2)

#include <iostream>
using namespace std;

int main()
{
    int n = 0, current = 1, prev = 0, fib = 0;
    cout << "Enter no of how many fib element you want: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fib = current + prev;
        prev = current;
        current = fib;

        cout << fib << endl;
    }
}