#include <iostream>

using namespace std;

void reverse(int array[], int i, int j)
{
    while (i < j)
    {
        int temp;

        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        i++;
        j--;
    }
}

// Print a Message Calling Recursive

void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int array[] = {10, 20, 30, 40, 50};

    int n = sizeof(array) / sizeof(array[0]);

    print(array, n);

    reverse(array, 0, n - 1);

    cout << "Reverse Number is : " << endl;

    print(array, n);

    return 0;
}