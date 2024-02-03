// Range of Misssig Array

#include <iostream>

using namespace std;

// Call Functions

int miss(int array[], int n)
{
    // Given the range of elements
    // are 1 more than the size of array

    n = n + 1;

    int find = (n) * (n + 1) / 2;

    for (int i = 0; i < n; i++)
    {
        find -= array[i];
        return find;
    }
}

int main()
{
    int array[] = {1, 2, 3, 5};

    int n = sizeof(array) / sizeof(array[0]);

    int missing = miss(array, n);

    cout << "The Answer is : " << missing;

    return 0;
}