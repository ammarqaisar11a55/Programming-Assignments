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

void Selection_Sort(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int min_index = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[min_index] > nums[j])
            {
                min_index = j;
            }
        }

        if (min_index != i)
        {
            swap(nums[min_index], nums[i]);
        }
    }
}

int main()
{
    vector<int> nums = {42, 17, 89, 3, 56, 21, 74,
                        9, 68, 33, 5, 90, 12, 48, 27};

    cout << "Before Sorting:";
    PrintVector(nums);
    Selection_Sort(nums);
    cout << "After Sorting:";
    PrintVector(nums);

    return 0;
}
