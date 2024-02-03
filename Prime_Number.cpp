// Prime number is a number that is greater than 1 and divided by 1 or itself. In other words,
// prime numbers can't be divided by other numbers than itself or 1. For example 2, 3, 5, 7, 11, 13, 17, 19, 23.... are the prime numbers.

#include <iostream>

using namespace std;

int main()
{
    int n;
    int m = 0, flag = 0;

    cout << "Enter the Prime Number : ";
    cin >> n;

    m = n / 2;

    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is Not Prime";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "\nNumber is Prime";
    }
}