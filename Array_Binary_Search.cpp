// Array Using the Key of Element Users Input

#include <iostream>

using namespace std;

// Create a Function

int key_binary_search(int array[], int Key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == Key)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int array[7] = {5, 7, 10, 12, 45, 67, 77};
    int Key = sizeof(array) / sizeof(array[0]);
    int size;

    cout << "Enter the Elements to search : ";
    cin >> Key;

    int found_key = key_binary_search(array, Key,10);

    if (found_key)
    {
        cout << "Key is Present" << endl;
    }

    else
    {
        cout << "Key is Not Present" << endl;
    }

    return 0;
}