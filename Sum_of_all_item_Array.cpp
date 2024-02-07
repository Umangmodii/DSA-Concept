// Sum_of_all_item_Array
// 1 + 2 + 3 + 4 + 5 = 15

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;

    int array[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        sum = array[i] + sum;
    }

    cout << "Sum of all the elements of an array: " << sum;
}