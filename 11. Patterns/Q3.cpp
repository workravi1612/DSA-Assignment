// Print the Palindromic Pattern with Numbers.
// For n = 5

//     1
//    212
//   32123
//  4321234
// 543212345

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter no for length: ";
    cin >> n;

    for (int i = 1; i <= n; i++) // line
    {
        // inline
        for (int j = 0; j < n - i; j++) // space before
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)// before (with) 1
        {
            cout << j;
        }
        for (int j = 2; j <= i; j++)// after 1
        {
            cout << j;
        }

        cout << endl;
    }
}
