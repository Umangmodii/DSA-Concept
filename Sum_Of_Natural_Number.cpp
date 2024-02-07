// CPP Program to Find Sum of Natural Numbers
// Sum = 100 * 100 + 1 / 2 = 100 * 50.5 = 5050
// sum of n natural numbers=n*(n+1)/2

#include <iostream>

using namespace std;

int main()
{
    int i = 1, sum = 0, n = 100;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << "Sum of First 100 Natural Numbers is = " << sum;

    return 0;
}