// What’ll be the output of the program:

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    if (++a*5 <= 25) {  // 6 * 5 ! <= 25   false
    cout<<"Hello\n";
    } else {
    cout<<"Bye\n";
    }
    return 0;
}    