// Reverse Array Using in CPP
// For Example : 123 to 321

#include <iostream>

using namespace std;

// Function Base Call
void base(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

//  Recursive Reverse Number Call
void reverse_array(int array[], int i, int j)
{
    int temp;

    while (i < j)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int i, j;

    cout << "Before Reverse Number is : ";

    // Base Size of Value
    base(array, n);

    // Create a function using  loop for reversing the given array.
    reverse_array(array, 0, n - 1);
    
    cout << "\n";

    cout << "After Reverse Number is : ";

    base(array, n);

    return 0;
}