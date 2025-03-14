//What will be the output of the following code :

#include<iostream>
using namespace std;
int main(){
    // Declare an integer 'a' and initialize it with value 32
    int a = 32;
    // Create an integer pointer 'ptr' that stores the address of 'a'
    int *ptr = &a; 

    // Declare a character 'ch' and initialize it with 'A' (ASCII value 65)
    char ch = 'A';
    // Create a reference 'cho' to character 'ch' (cho and ch refer to same memory location)
    char &cho = ch; 

    // Add value of 'a' (32) to 'cho' (which is referencing 'ch')
    // 'A'(65) + 32 = 97 ('a' in ASCII)
    cho += a; 

    // Add the current value of 'ch' (97) to the value pointed by ptr (which is 'a')
    // 32 + 97 = 129
    *ptr += ch; 

    // Output the final values:
    // a = 129 (modified through pointer)
    // ch = 'a' (ASCII 97, modified through reference)
    cout << a <<", " << ch << endl;
}