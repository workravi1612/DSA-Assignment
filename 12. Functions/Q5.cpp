// Write a function that accepts a character (ch) as parameters & returns the character that occurs after ch in the English alphabet.

// Eg : input = ‘c’, return value = ‘d’
// Note : for ch = ‘z’, return ‘a’.

#include<iostream>
using namespace std;

char nextChar(char x){
    return x != 'z' ? char((int)x + 1 ) : 'a';
}

int main(){
    char x = 'a';
    cout << "Enter char to get it's next char: ";
    cin >> x;
    cout << nextChar(x);
}