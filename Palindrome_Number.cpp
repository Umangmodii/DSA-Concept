// Palindrome Number Using Recursion 

#include <iostream>

using namespace std;

// Create a Recursive Function
int Check_Palindrome(string str, int i, int j)
{
     // Base Casse

     if(str[i] != str[j])
     {
         return 0;
     }
     else
     {
        return Check_Palindrome(str,i+1,j+1);
     }
}

int main()
{
    string name = "BookooB";
    cout << "\n";

    int Palindrome = Check_Palindrome(name,0,name.length()-1);

    if(Palindrome)
    {
        cout << "Number is Palindrome.";     
    }

    else
    {
       cout << "Number is Not Palindrome.";  
    }

    return 0;
}