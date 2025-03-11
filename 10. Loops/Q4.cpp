// For a positive N , WAP that prints all the prime numbers from 2 to N.
// (Assume N >= 2)

#include <iostream>
using namespace std;

int main()
{
    int n = 0;

    cout << "Enter number to define range from 2 (to print all prime nums): ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            cout << i << " is prime" << endl;;
        }
        else
        {
            for (int j = 2; j < 10; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                }
            }
            if (isPrime)
            {
            cout << i << " is prime" << endl;
            }
            
        }
        // cout << i << endl;
    }
}
