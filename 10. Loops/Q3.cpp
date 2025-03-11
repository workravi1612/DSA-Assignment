// WAP to input a number and check whether the number is an Armstrong number or not.

#include <iostream>
using namespace std;

int main()
{
    int n = 0, sum = 1, len = 0, arm = 0;

    cout << "Enter number to check if it is armstrong: ";
    cin >> n;
    int originalN = n;

    while (n != 0)
    {
        n /= 10;
        len++;
    }
    n = originalN;

    for (int i = 1; i <= len; i++)
    {
        int temp = n % 10;
        // cout << " temp = "<< temp << endl;
        // cout << " main " << i << endl;
        for (int i = 1; i <= len; i++)
        {
            sum *= temp;
            // cout << " mini " << i << endl;
            // cout << "SUM = "  << sum << endl;
        }

        arm += sum;
        sum = 1;
        n /= 10;
    }
    // cout << arm ;

    if (arm == originalN)
    {
        cout << originalN << " is armstrong";
    }
    else
    {
        cout << originalN << " is not armstrong";
    }
}