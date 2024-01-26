#include <iostream>
#include <vector>

using namespace std;

long long maxProduct(vector<int> arr, int n)
{
    long long ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        long long product = 1;

        for (int j = i; j < n; j++)
        {
             product*=arr[j];

             if(ans < product)
             {
                   ans = product;
             }
        }
    }

    return ans;
}
