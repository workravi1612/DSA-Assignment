// In a program, input the side of a square. You have to output the area of
// the square.
// Input : n (side) Output
// : n*n (area)

#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size of one side: ";
    cin >> size ;
    int area = size * size;
    cout << "The area is " << area ;
}