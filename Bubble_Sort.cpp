#include <iostream>

using namespace std;

// Base Values

void base(int arr[], int n) // Function to Base Elements
{
    for (int i = 0; i < n; i++) // Same Results of Array
    {
        cout << arr[i] << " ";
    }
}

// Sort Valuess
void sort(int arr[], int n) // Function to sort Elements
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp; // Temp Variable Declare to Swapping Both Values
                bool swapped = false; // OPtimized Values in Optional

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                // Optimized Value
                swapped = true;
            }
                
        }
    }
}

int main()
{
    int arr[5] = {45, 1, 32, 13, 26};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before the Sorting element are : "
         << "\n";

    base(arr, n);
    sort(arr, n);

    cout << "\n";

    cout << "After the Sorting element are : "
         << "\n";

    base(arr, n);

    return 0;
}

// Time Complexity :

// (1). Best Case :  0(n)
// (2). Average Case : 0(n*2)
// (3). Worst Case : 0(n*2)

// Space Complexity :

// (1). Space Complexity is : 0(1)
// (2). Stable is : (YES)