#include <iostream>

using namespace std;

int fact(int n)
{
    // Base Case

    if(n == 0)
    {
     return 1;
    }

    return n * fact(n-1);
}

int main()
{
    int n,ans;

    cout << "Enter the Factorial Number : ";
    cin >> n;

    ans = fact(n);

    cout << "The Factorial Number is : " << ans;
}