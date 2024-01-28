// Queue is Used in STL CPP

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Create a Queue
    queue<int> q;

    // Push = Rear Add in Data

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "The Queue Element Size is : " << q.size();

    // POP Used in Delete Data

    cout << "\n";

    q.pop();

    cout << "The Queue ELement Size is : " << q.size();

    cout << "\n";

    // Empty Check the ELement

    if (q.empty())
    {
        cout << "Queue is Empty";
    }

    else
    {
        cout << "Queue is Not Empty";
    }

    cout << "\n";

    q.push(60);

    // Front Element
    cout << "The Rear Element is : " << q.front();

    q.push(70);

    return 0;
}