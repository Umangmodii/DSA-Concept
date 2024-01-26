// which has the maximum sum and return its sum.

#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.

    long long maxSubarraySum(int arr[], int n)
    {
        long int sum = 0;
        long int maximum = arr[0];

        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            maximum = max(sum,maximum);

            if (sum < 0)
            {
                  sum = 0;
            }
        }

        return maximum;
    }
};

// For Input: 
// 5
// 1 2 3 -2 5

// Your Output: 
// 9

// Expected Output: 
// 9