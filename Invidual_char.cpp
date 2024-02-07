// Program to separate the Individual Characters from a String

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "Enter the String : ";
    getline(cin, str);

    // Iterate through each character in the string

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        cout << ch << " ";
    }

    return 0;
}

// OUTPUT
// Enter the String : UMANG MODI CHANDRAKANTBHAI
//U M A N G M O D I C H A N D R A K A N T B H A I