// Selection Sort Find in C++

// Selection sort is generally used when -

// A small array is to be sorted
// Swapping cost doesn't matter
// It is compulsory to check all elements

// mandatory Used in (n-1) in for-Loop

#include <iostream>

using namespace std;

// Base Case

void base(int array[], int n) /* function to print the array */  
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\n";
    }
}

// Selection_Sorted Case

void Selection_sort(int array[], int n) /* function to print the array */  
{
    int i, j;

    for (i = 0; i < n - 1; i++) // One by one move boundary of unsorted subarray  
    {
        int min = i; // minimum element in unsorted array

        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                int min = j;

                // Swap the minimum element with the first element  

                int temp = array[min];
                array[min] = array[i];
                array[i] = temp;
            }
        }
    }
}

int main()
{
    int array[10] = {7, 8, 4, 5, 2, 1, 3, 6, 10, 9};

    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before Elements Sorted in List : ";
    cout << "\n";

    base(array, n);
    Selection_sort(array, n);

    cout << "\n";

    cout << "After Elements Sorted in List : ";
    cout << "\n";

    base(array, n);

    return 0;
}

// Time Complexity

// (1). Best Case : 0(n*2)
// (2). Average Case : 0(n*2)
// (3). Worst Case : 0(n*2)

// Space Complexity

// (1).Space Complexity : 0(1) <- Constant Space Complexity
// (2). Stable is : (YES)