// Sliding Window in Cpp
// Formula n-k+1

#include <iostream>

using namespace std;

void Base(int array[], int n)
{
    // Base Case

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int maxSum(int array[], int n, int k)
{
    int maximum_sum = INT16_MIN;

    for (int i = 0; i < n - k + 1; i++)
    {
        int sum = 0;
        
        for (int j = 0; j < k; j++)
        {
            sum = sum + array[i + j];
            maximum_sum = max(sum, maximum_sum);
        }
    }

    return maximum_sum;
}

int main()
{
    int array[] = {11, 6, 7, 10, 6, 3, 11, 0, 20};
    int k = 4;

    int n = sizeof(array) / sizeof(array[0]);

    // maxSum(array, n, k);
    Base(array, n);
    cout << maxSum << " ";

    return 0;
}