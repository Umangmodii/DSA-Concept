#include <iostream>

using namespace std;

int main()
{
    int temp;
    int a = 10, b = 20;

    cout << "Before Swap is " << a << " and " << b;

    cout << "\n";

    // swapping using third variable method
    temp = a;
    a = b;
    b = temp;

    cout << "After Swap is " << a << " and " << b;

    return 0;
}