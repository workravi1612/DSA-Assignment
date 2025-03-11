// Print the 0-1 Triangle Pattern.
// For n = 5
// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter no for length: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 != 0)
                {
                    cout << 0;
                }
                else
                {
                    cout << 1;
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << 0;
                }
                else
                {
                    cout << 1;
                }
            }
            cout << endl;
        }
    }
}