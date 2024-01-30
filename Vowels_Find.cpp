// Find a Vowels using String in CPP

#include <iostream>

using namespace std;

// With User input string

// int main()
// {
//     string str;

//     cout << "Enter the String : ";
//     cin >> str;

//     for(int i=1; i<str.length(); i++)
//     {
//         if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//               cout << str[i] << " ";
//         }
//     }

//        cout << "The Vowels in the String are: ";

//         return 0;
// }

// With Array Using Vowels

int main()
{
    string str[] = {"Umang", "Ravi", "Kishan", "Parth", "Mayank"};

    cout << "The Vowels in the String are: ";
    

    for (int i = 1; i < sizeof(str) / sizeof(str[0]); i++)
    {
        for (int j = 0; j < str[i].length(); j++)
        {
            if (str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U' ||
                str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u')
            {
                cout << str[i][j] << " ";
            }
        }
    }

    return 0;
}