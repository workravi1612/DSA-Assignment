//  Write a function to calculate the sum of digits of a number

#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n =0;
    cout << "Enter number to get it's every ele.'s sum: ";
    cin >> n;
    cout << sum(n);
}