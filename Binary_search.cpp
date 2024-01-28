#include <iostream>

using namespace std;

void Binary_search(int Array[], int start, int end, int value)
{
    int mid = 0;

    if (end >= start)
    {
        mid = (start + end) / 2;

        if (Array[mid] == value)
        {
            return mid + 1;
        }

        else if (Array[mid] > value)
        {
            cout << Binary_search(Array, mid + 1, end, value);
        }

        else
        {
            cout << Binary_search(Array, mid - 1,end,value);
        }
    }

    return -1;
}

void base(int Array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << Array[i] << " ";
    }
}

int main()
{
    int Array[] = {11, 14, 25, 30, 40, 41, 52, 57, 70};
    int n = sizeof(Array) / sizeof(Array[0]);
    int value = 30;
    int result = Binary_search(Array, n, value);

    cout << "The elements of the array are - ";

    base(Array, n);

    cout << "Element to be search : " << value;

    if (result == -1)
    {
        cout << "The Element is not Present in array";
    }

    else
    {
        cout << "\nElement is present at " << result << " position of array";
    }

    Binary_search(Array, start, end, value);

    return 0;
}