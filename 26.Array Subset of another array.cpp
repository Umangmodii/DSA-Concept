#include <iostream>
#include <string>

using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{
    sort(a2, a2 + m);
    sort(a1, a1 + n);

    int count = 0;
    int l1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (l1 < m)
        {
            if(a2[l1] == a1[i])
            {
                     count = count + 1;
                     l1++;
            }
        }

        else
        {
            break;
        }
    }

    if(count == m)
    {
       return "Yes";
    }

    else
    {
       return "Nos";
    }
}
