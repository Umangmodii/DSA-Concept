#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(), a.end());

        long long result  = INT64_MAX

        int i = 0;
        int j = m - 1;

        while (j < n)
        {
            long long minval = a[j++] - a[i++];
            result = min(result,minval); 
        }

        return result;
        
    }
};