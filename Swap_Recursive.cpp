#include <iostream>

using namespace std;

// Create a Function 

int Swap_Recursive(string& str, int i, int j)
{
   // Call For Recursive
   cout << "The Recursive For : " << str << "\n";
    
    // Base Case

    if(i > j)
    {
        return 1;
    }

    swap(str[i], str[j]);
    i++;
    j--;

     // Recursive Call
    return Swap_Recursive(str,i,j);
}

int main()
{
    string name = "abcde";
    cout << "\n";

    Swap_Recursive(name,0,name.length()-1);
    cout << "\n";

    cout << "The Swap Number is :" << name << "\n";

    return 0;
}