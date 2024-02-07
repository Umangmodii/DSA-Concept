// Reverse String Using CPP

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    // Find the reverse of the string
    string reverse = string(str.rbegin(), str.rend());

    cout << "Reverse of the string: " << reverse << endl;

    return 0;
}