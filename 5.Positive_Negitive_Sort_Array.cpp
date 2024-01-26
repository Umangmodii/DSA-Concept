// Move all negative numbers to beginning and positive to end with constant extra space

#include <iostream>

using namespace std;

void sorted(int arr[], int n)
{
    int i, j = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void print(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << (arr[j]) << "\n";
    }
}

int main()
{
    int array[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};

    int n = sizeof(array) / sizeof(array[0]);

    sorted(array, n);
    print(array, n);

    return 0;
}

