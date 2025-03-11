//  Write a C++ program to get a number from the user and print whether it's positive, negative or zero.


#include<iostream>
using namespace std;

int main(){
    int n =0;
    cout << "Enter Number: ";
    cin >> n;

    if(n != 0){
    if (n < 0)
    {
        cout << n << " is negative";
    }else 
    {
        cout << n << " is positive";
    }}else{
        cout << n << " is zero";

    }
    
    

    return 0;
}