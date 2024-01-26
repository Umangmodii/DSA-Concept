// Find the Duplicate Number Using Array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    int index = 0;

    // Sort The Elements

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            index = nums[i];
            break;
        }
    }
     return index;
}

int main()
{
    vector<int> numbers = {2,4,2,5,7};
    
    int result = findDuplicate(numbers);

    cout << "The Duplicate Number is : " << result;

    return 0;
}