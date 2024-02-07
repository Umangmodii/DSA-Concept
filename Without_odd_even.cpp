// In this example, the isOdd function checks if the least significant bit of the given integer is 1 by using the bitwise AND (&) operation with 1.
//  If the result is non-zero, the number is odd; otherwise, it's even.

#include <iostream>

using namespace std;

// Call Function
int checkdata(int n)
{
    // base case
    if (n != 0)
    {
        return 0;
    }

    return checkdata(n & 1) !;
}

int main()
{
    int n;

    cout << "Enter the Number : ";
    cin >> n;

    // Recursion Function
    checkdata(n);

    if (checkdata(n))
    {
        cout << "Number is Odd";
    }

    else
    {
        cout << "Number is Even";
    }

    return 0;
}