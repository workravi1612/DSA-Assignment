// Write a C++ program that takes a year from the user and print whether that year is a leap year or not.

#include <iostream>
using namespace std;

int main()
{
    int year = 0;
    cout << "Enter Year: ";
    cin >> year;
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout << year << " is leap year";
        }
        else
        {
            cout << year << " is not leap year";
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            cout << year << " is leap year";
        }else
        {
            cout << year << " is not leap year";
        }
        
    }

    return 0;
}