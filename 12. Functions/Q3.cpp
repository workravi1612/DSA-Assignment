// Write a function which takes 2 numbers as parameters (a & b) and
// outputs : a^2 + b^2 + 2*ab.

#include <iostream>
using namespace std;

int square(int x, int y){
    return (x*x + y*y + 2*x*y);
}

int main(){
    int a = 0,b = 0;
    cout << "Enter 2 numbers to get their whole square: ";
    cin >> a >> b;
    cout << square(a,b);
}