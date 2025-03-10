#include <iostream>
#include <vector>
using namespace std;

int Linear_Search(int target, vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
            return i;
    }

    return -1;
}



int main()
{
    vector<int> nums = {42, 17, 89, 3, 56,
        21, 74, 9, 68, 33, 5, 90, 12, 48, 27};
    int target;
    cout << "Enter Target Element: ";
    cin >> target;

    int index = Linear_Search(target, nums);
    cout << (index == -1 ? "Target Not Found." : "Target Found") << endl;

    return 0;
}
