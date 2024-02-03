// Recursive Function Using Fibonacci Numbers

#include <iostream>

using namespace std;

// Create a Recursive Function

int Fibonacci(int n)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int n;
    int i = 2;
    

    cout << "Enter the Fibonacci Number : ";
    cin >> n;

    Fibonacci(n);

    cout << "The Sequence Number is : ";

    while (i < n) // i values is 0 and n values is Number of User enter Values
    {
        cout << " " << Fibonacci(i);
        i++;
    }

    return 0;
}