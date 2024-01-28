// # Write a Quick Sort algorithm in CPP that sorts an array of numbers.

#include <iostream>

using namespace std;

void base(int Array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << Array[i] << " ";
    }
}

void quick(int array[], int start,  int end)
{
    if (start < end) // Check starting if the starting index is less than the ending index
    {
        int p = partition(array, start, end); // P is partitioning Index
        quick(array,start, p-1);
        quick(array, p+1, end);
    }
}

int partition(int array[], int start, int end)
{
    /* function that consider last element as pivot, place the pivot at its exact position, and place
    smaller elements to left of pivot and greater elements to right of pivot.  */

    int pivot = array[end]; // Pivot Element
    int i = start - 1;

    for(int j=start; j<end-1; j++)
    {
        // If current element is smaller than the pivot

        if (array[j] < pivot)
        {
            int temp = array[i]; // increment index of smaller element
            array[i] = array[j];
            array[j] = temp;

            i++;
        }
    }

    int temp = array[i + 1]; // increment index of LArger element
    array[i + 1] = array[end];
    array[end] = temp;

    return (i+1);
}

int main()
{
    int array[] = {24, 9, 29, 14, 19, 27};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before sorting array elements are - \n";

    base(array, n);
    quick(array, 0, n - 1); // Start with a , start with 0 and end with n -1

    cout << "After sorting array elements are - \n";

    base(array, n);

    return 0;
}
