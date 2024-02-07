// To subtract two matrices, use - operator. Let's see a simple example to add two matrices of 3 rows and 3 columns.

#include <iostream>

using namespace std;

int main()
{
    // Multidimensional Arrays in C++

    int a[3][3] = {{1, 3, 4}, {2, 4, 3}, {3, 4, 5}};
    int b[3][3] = {{1, 3, 4}, {2, 4, 3}, {1, 2, 4}};

    // creating another matrix to store the sum of two matrices
    int c[3][3];

    // adding and printing addition of 2 matrices
    cout << "Addition of Matrices:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];

            cout << c[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}