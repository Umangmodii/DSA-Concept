#include <iostream>

using namespace std;

int main()
{
    int array[3][3] = {{4, 1, 3}, {3, 5, 7}, {8, 2, 6}};

    int even = 0;
    int odd = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] % 2 == 0)
            {
                even++;
            }

            else
            {
                odd++;
            }
        }

        cout << "Number is Even : " << even << " ";
        cout << "Number is Odd : " << odd << " ";
    }

    return 0;
}