//  Enter cost of 3 items from the user (using float data type) - a pencil, a
// pen and an eraser. You have to output the total cost of the items back to the user as their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)

#include <iostream>
using namespace std;

int main()
{
    int bill = 0;
    for (int i = 1; i <= 3; i++)
    {
        float item;
        cout << "Enter price of item " << i << " ";
        cin >> item;
        bill += item;
    }
    cout << "total bill without gst is " << bill << endl;
    cout << "total bill with gst is " << bill * 1.18;
}