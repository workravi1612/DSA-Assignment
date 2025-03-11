// WAP to print the multiplication table of a number, entered by the user

#include<iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter number to get it's table: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {

        cout << n << " x " << i << " = " << n*i << endl;
    }
    
}