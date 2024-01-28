// Array Using Minimum and Maximum

#include <iostream>

using namespace std;

// Create a Function
int maximum(int array1[], int n1)
{
    int max = array1[0];

    for (int i = 1; i < n1; i++)
    {
        if (array1[i] > max)
        {
            max = array1[i];
        }
    }

    return max;
}

int minimum(int array2[], int n2)
{
    int min = array2[0];

    for (int i = 1; i < n2; i++)
    {
        if (array2[i] < min)
        {
            min = array2[i];
        }
    }

    return min;
}

int main()
{
    int array1[] = {10, 20, 40, 50, 60};
    int array2[] = {5, 15, 25, 35, 45};

    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    // Declare a Function in Array1
    int max = maximum(array1, n1);

    cout << "The Maximum element is : " << max << endl;

    int min = minimum(array2, n2);

    cout << "The Minimum Element is : " << min << endl;

    return 0;
}