// Palindrome and Armstrong same logic

#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    int r;

    cout << "Enter the Number : ";
    cin >> n;

    int temp = n;

    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    if (temp == sum)
    {
        cout << "Number is Palindrome.";
    }

    else
    {
        cout << "Number is not Palindrome.";
    }

    return 0;
}