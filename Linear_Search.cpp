// Linear Search Finding the Array

#include <iostream>

using namespace std;

// Base Case
void base(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Linear Search
int linear_search(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return i+1; 
        }

        return -1;
    }
}

int main()
{
    int arr[] = {69, 39, 29, 10, 56, 40, 24, 13, 51};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 25;


    cout << "The elements of the array are - ";

    base(arr, n, val);
    linear_search(arr, n, val);

    int result = linear_search(arr, n, val);

    cout << "\nElement to be searched is - " << val;

    if (result == -1)
    {
        cout << "\nThe Elements is not Present";
    }

    else
    {
        cout << "\nThe Elements " << result << " is Present";
    }

    return 0;
}