// Find Duplicate Arrays in CPP

#include <iostream>

using namespace std;

int main()
{
    int array[100], size;

    cout << "Enter the Number  of Elements of Size : ";
    cin >> size;

    cout << "Enter the Elements : ";

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    /* Logic to print duplicate
         element of an array */

    for (int i = 0; i < size; i++) // Total Size of Array in 5
    {
        for (int j = i + 1; j < size; j++) // j = 0 + 1 = 1 is check the one by one Condition in loop
        {
            if (array[i] == array[j]) // When equal with i and j then Print it.
            {
                cout << "The Duplicate Array is : " << array[i];
                break;
            }
        }
    }

    return 0;
}