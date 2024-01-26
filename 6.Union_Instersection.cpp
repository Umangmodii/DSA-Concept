
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
     // Function to return the count of number of elements in union of two arrays.
     int doUnion(int a[], int n, int b[], int m)
     {
          // code here
          unordered_set<int> s;

          for (int i = 0; i < n; i++)
          {
               s.insert(a[i]);
          }

          for (int i = 0; i < m; i++)
          {
               s.insert(b[i]);
          }
          return s.size();
     }
};

// Output 

// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3

// Output: 
// 5