// Write a function that prints the largest of 3 numbers.

#include <iostream>
using namespace std;

int largestOfThree (int x, int y, int z){
    if (x > y && x > z)
    {
        return x;
    }else if( y > z && y > x){
        return y;
    }else{
        return z;
    }

}
int main(){
    int a = 0, b= 0, c= 0;
    cout <<  "Enter 3 nums to get their highest: ";
    cin >> a >> b >> c;
   cout << "Largest is: " << largestOfThree(a,b,c);
}