#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void array(int arr[], int n, int k)
{
    int x = n / k;

    unordered_map<int, int> f;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        i++;
    }

    for (i auto : f)
    {
        if (i > x)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    array(arr, n, k);

    return 0;
}