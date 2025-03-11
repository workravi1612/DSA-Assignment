// For any 3 digit number check whether it’s an Armstrong number or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.

// Eg : 371 is an armstrong number.
// 3*3*3 + 7*7*7 + 1*1*1 = 371

#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "Enter number to check if it is armstrong or not: ";
    cin >> n;
    int OriginalN = n, sum =0;

    for (int  i = 1; i <= 3; i++)
    {
        int temp;
        temp = n % 10;
        sum += temp * temp * temp;
        n /= 10;
    }
    

    if (sum == OriginalN)
    {
        cout << OriginalN << " is armstrong number";
    }else{
        cout << OriginalN << " is not armstrong number";

    }
    
    
    return 0;
}