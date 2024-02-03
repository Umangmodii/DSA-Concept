// Vector Using a STL

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    // Create a new Add Element
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);

    // Remove a Element in Last
    v.pop_back();

    cout << "The Top ELement is : " << v.size();

    if (v.empty())
    {
        cout << "\n Vector Data is Empty";
    }

    else
    {
        cout << "\n vector data is not Empty";
    }

    cout << "\n";

    // First Element first

    v.front();

    cout << "The Size is " << v.size();

    return 0;
}