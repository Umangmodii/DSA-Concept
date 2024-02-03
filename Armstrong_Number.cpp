// Armstrong number is a number that is equal to the sum of cubes of its digits.
// For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

// 371 = (3*3*3)+(7*7*7)+(1*1*1)
// where:
// (3*3*3)=27
// (7*7*7)=343
// (1*1*1)=1
// So:
// 27+343+1=371

#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    int rem;
    int r;

    cout << "Enter the Armstrong Number : ";
    cin >> n;

    int temp = n;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }

    if (temp == sum)
    {
        cout << "The Number is Armstrong";
    }

    else
    {
        cout << "The Number is not Armstrong";
    }

    return 0;
}
