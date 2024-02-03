// Reverse Recursive Number using CPP

#include <iostream>

using namespace std;

// Function Recursion

int reverse(int n)
{
    // Base Case

    if (n < 10)
    {
        cout << n;
        return 1;
    }

    else
    {
        cout << n % 10;
        reverse(n / 10);
    }
}

int main()
{
    int n = 1234;

    reverse(n);

    return 0;
}