// What will be the value of x & y in the following program:

#include<iostream>
using namespace std;

int main() {
    int a = 63, b = 36;
    bool x = (a < b) ? true : false; //false = 0
    int y = (a > b) ? a : b; // a
    cout << x << "," << y << endl;
    return 0;
    }