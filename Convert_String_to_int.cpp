// Convert String to int

#include <iostream>
#include <string>

using namespace std;

int main()
{
    try
    {
        string str1 = "42";
        string str2 = "54 fifty four";
        string str3 = "62 sixty two 54";

        int num1 = stoi(str1);
        int num2 = stoi(str2);
        int num3 = stoi(str3);

        cout << num1 << endl;
        cout << num2 << endl;
        cout << num3 << endl;
    }

    catch (exception e)
    {
        cout << "Error !The given input is not a valid integer.";
    }

    return 0;
}