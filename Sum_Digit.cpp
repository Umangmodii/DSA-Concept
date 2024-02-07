// Sum of Digit in CPP
// Using in Recursion

// Example : 1 + 2 + 3 = 6

#include <iostream>

using namespace std;

// Function Call

int sumdigit(int n)
{
    int rem;
    int sum = 0;
    // base case
    if (n == 0)
    {
        return 0;
    }

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;

        return sum + sumdigit(n);
    }
}

int main()
{
    //  Number to find the sum of digits.

    int n;

    cout << "Enter the Number : ";
    cin >> n;

    // Create a recursive Functions
    int ans = sumdigit(n);

    cout << "The Sum is :  " << ans;

    return 0;
}