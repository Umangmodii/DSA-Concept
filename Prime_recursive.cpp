// Prime Recursion Using cpp
// Sqrt Used to check if a number is prime or not.

#include <iostream>
#include <math.h>

using namespace std;

// Functions

bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        // base case
        if (n == 0)
        {
            return false;
        }

        if (n == 1)
        {
            return false;
        }

       // Logic
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter the Number : ";
    cin >> n;

    // Create a Function call Recursive

    if (prime(n))
    {
        cout << "Prime Number";
    }

    else
    {
        cout << "Not Prime Number";
    }

    return 0;
}