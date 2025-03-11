// Write a program to calculate the area of a circle.
// Input : r (radius)
// Output : PI*r*r (area)

#include<iostream>
using namespace std;

int main(){
    const float PI = 3.1415;
    int redius = 0;
    cout << "Enter redius: ";
    cin >> redius;

    cout << "the area of circle is " << PI * redius * redius;
}