// Multiply Matrices Using CPP

#include <iostream>

using namespace std;

int main()
{
    // creating two matrices
    int a[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int b[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};

    // Store in third Matrices
    int c[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;

            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }

            cout << c[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}