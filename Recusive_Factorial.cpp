// Recusive Using Factorial Number

#include <iostream>

using namespace std;

int factorial_number(int n)
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

    return n * factorial_number(n - 1);
}

int main()
{
    int n;

    cout << "Enter the Factorial Number : ";
    cin >> n;

    int ans = factorial_number(n);

    cout << "The Factorial Number is : " << ans;

    return 0;
}