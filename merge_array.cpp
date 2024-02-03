// Implement a function that takes two sorted arrays and merge them into a single sorted array without any functions

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Function Call

void merge_sort(int array1[], int array2[], int n1, int n2, int array3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    // traverse the arr1 and insert its element in arr3
    while (i < n1)
    {
        array3[k++] = array1[i++];
    }

    // now traverse arr2 and insert in arr3
    while (j < n2)
    {
        array3[k++] = array2[j++];
    }

    sort(array3, array3 + n1 + n2);
}

int main()
{
    int array1[] = {1, 3, 5, 7};
    int n1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {2, 4, 6, 8};
    int n2 = sizeof(array2) / sizeof(array1[0]);

    int array3[n1 + n2];

    // Call Functions
    merge_sort(array1, array2, n1, n2, array3);

    cout << "Array after Merge Sort: \n";

    for (int i = 0; i < n1 + n2; i++)
    {
        cout << array3[i] << " ";
    }
}