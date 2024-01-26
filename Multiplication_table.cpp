#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter the Number : ";
    cin >> n;

    for (int i = 1; i <= 10; i++) // Number of 1 to 10 Time Loop
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}