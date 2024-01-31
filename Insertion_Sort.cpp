#include <iostream>

using namespace std;

// Base Case
void base(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

// Insertion Sort Case
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        int temp = arr[i];

        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }

            else
            {
                break;
            }
        }

        arr[j + 1] = temp;
    }
}



int main()
{
    int array[10] = {7, 8, 4, 5, 2, 1, 3, 6, 10, 9};

    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before Elements Sorted in List : ";
    cout << "\n";

    base(array, n);
    insertion_sort(array, n);

    cout << "\n";

    cout << "After Elements Sorted in List : ";
    cout << "\n";

    base(array, n);

    return 0;
}

// 1. Time Complexity

// Case	Time Complexity
// Best Case
// O(n)
// Average Case
// O(n2)
// Worst Case
// O(n2)

// 2. Space Complexity
// Space Complexity
// O(1)
// Stable
// YES