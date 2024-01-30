#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
   

    return 0;
}
