// Creating a stack in CPP
// LIFO Method Used

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // Creating a stack
    stack<int> s1;

    // Add ELement
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    // Top Elements Find
    cout << "Printing Top Element are : " << s1.top();

    // Pop Elements Remove
    s1.pop();

    cout << "\n";

    // Size Check
    cout << "The Stack Size is : " << s1.size();

    cout << "\n";

    if (s1.empty())
    {
        cout << "Stack is Empty!" << endl;
    }

    else
    {
        cout << "Stack is Not Empty!" << endl;
    }

    return 0;
}