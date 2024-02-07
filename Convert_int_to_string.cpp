// int to String

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    // Convert to Int to String

    string s1 = to_string(a);
    string s2 = to_string(b);

    // Print the Message Int to String

    cout << "The Value of Interger Number is " << s1;
    cout << "\n";
    cout << "The Value of Second Integer Number is " << s2 << endl;

    return 0;
}