#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<int> a)
{

    cout << " [";

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
        if (i != a.size() - 1)
        {
            cout << ",";
        }
    }
    cout << "]";
    cout << endl;
}

void Bubble_Sort(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size() - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
}

int main()
{
    vector<int> nums = {42, 17, 89, 3, 56, 21, 74,
                        9, 68, 33, 5, 90, 12, 48, 27};

    cout << "Before Sorting:";
    PrintVector(nums);
    Bubble_Sort(nums);
    cout << "After Sorting:";
    PrintVector(nums);

    return 0;
}