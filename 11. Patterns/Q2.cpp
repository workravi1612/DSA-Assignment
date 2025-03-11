// Question 2 : Print the Rhombus Pattern.
// For n = 5
//     *****
//    *****
//   *****
//  *****
// *****

#include<iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter no for length: ";
    cin >> n;

    for (int i = 0; i < n; i++) //line
    {
        // inline
        for (int j = 1; j < n-i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    
    
}