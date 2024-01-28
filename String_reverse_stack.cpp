// String Reverse Using Stack

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str = "Umang";

    stack<char> s; // Create a new Stack  called 's' of type char.

    cout << "Original String: " << str;

    for (int i = 0; i < str.length(); i++)
    {
        char s1 = str[i];
        s.push(s1);
    }

    string ans = ""; // String All Values passed in Ans

    while (!s.empty())
    {
        char s1 = s.top();
        ans.push_back(s1);

        s.pop();
    }

    cout << "\n";

    cout << "Answer is : " << ans << endl;

    return 0;
}