#include <iostream>
#include <vector>
using namespace std;

int Binary_Search(int target, vector<int> nums)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (target == nums[mid])
            return mid;

        if (target > nums[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> nums = {3, 5, 9, 12, 17, 21, 27, 33,
                        42, 48, 56, 68, 74, 89, 90};
    int target;
    cout << "Enter Target Element: ";
    cin >> target;

    int index = Binary_Search(target, nums);
    cout << (index == -1 ? "Target Not Found." : "Target Found") << endl;

    return 0;
}