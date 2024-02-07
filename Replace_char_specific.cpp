// Program to replace the spaces of a string with a specific character

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello World";
    char ch = '-';

    // Replace space with specific character ch
    str = str.find('', ch);

    cout << "The Specific Character is : " << str;

    return 0;
}
