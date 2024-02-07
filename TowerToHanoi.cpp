// C++ recursive function to
// solve tower of hanoi puzzle

#include <iostream>

using namespace std;

void TowerToHanoi(int N, char from_rod, char to_rod, char aux_rod)
{
    // base case
    if (N == 0)
    {
        return;
    }1

    else
    {
        // Move tower N-1 disks from 'from_rod' to 'aux_road
        TowerToHanoi(N - 1, from_rod, to_rod, aux_rod);

        // Print Message
        cout << "Move Disk " << N << " From Road " << from_rod << " To Road " << to_rod << endl;

        // Move tower N-1 disks from 'from_rod' to 'aux_road
        TowerToHanoi(N - 1, aux_rod, to_rod, from_rod);
    }
}

int main()
{
    int N = 3;

    // Names of Road
    TowerToHanoi(N, 'A', 'B', 'C');

    return 0;
}