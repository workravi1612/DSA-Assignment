// Build a Simple Interest Calculator.
// Input : principal (P), rate (R), time (T)Output :
// (P*R*T) / 100

#include<iostream>
using namespace std;

int main(){
    float principal = 0, rate = 0, time = 0, interest = 0;

    cout << "Enter values in order as principal, rate, time(year), interest: ";
    cin >> principal >> rate >> time ;
    interest = (principal * rate * time) / 100;
    cout << "The interest will be : " << interest;
}