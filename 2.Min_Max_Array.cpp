#include <iostream>

using namespace std;

void Minimum(int array[5])
{
    int min = array[0];

    for (int i = 0; i <= 5; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }

    cout << "Minimum Number is : " << min << "\n";
}

void Maximum(int array[5])
{
    int max = array[0];

    for (int j = 0; j <= 5; j++)
    {
        if (max < array[j])
        {
            max = array[j];
        }
    }

    cout << "Maximum Number is : " << max << "\n";
}

int main()
{
    int array1[5] = {10, 20, 30, 40, 50};    // Minumum Number Find
    int array2[6] = {5, 10, 25, 30, 45, 55}; // Maximum Number Find

    Minimum(array1); // Passing Array
    Maximum(array2); // Passing Array

    return 0;
}