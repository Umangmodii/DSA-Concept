// Total Number of Vowels

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare a string
    string str = "This is a really simple sentence";
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'e')
        {
               count = count + 0;
               count++;
        }
    }

  cout << "Number of Vowels is : " << count;

    return 0;
}

using namespace std;