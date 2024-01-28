// String Wordcount in Numbers.

#include <iostream>

using namespace std;

int main()
{
    string str;
    int n;
    int count = 0;

    cout << "Enter the String : ";
    getline(cin,str);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] = ' ')
        {
            count = count + 1;
        }
    }

    cout << "The String Wordcount is : " << count;

    return 0;
}

// Using Split Function Using CPP

// #include<iostream>
// #include <bits/stdc++.h>
// #include<string>


// using namespace std;

// int main()
// {
//     string str[100];
//     int count = 0;

//     cout << "Enter the String : ";
//     cin >> str;

//     for(int i=0; i< str.split(); i++)
//     {
//            count = count + 0;
//     }

//     cout << "The String wordcount is : " << count;

//     return 0;
// }