#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid = 0;

        while (mid <= hi)
        {
            switch (nums[mid])
            {

            // If the element is 0
            case 0:
                swap(nums[lo++], nums[mid++]);
                break;

            // If the element is 1 .
            case 1:
                mid++;
                break;

            // If the element is 2
            case 2:
                swap(nums[mid], nums[hi--]);
                break;
            }
        }
    }
};

int main()
{

    Solution obj1;
    vector<int> nums{2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    obj1.sortColors(nums);

    for (auto x : nums)
        cout << x << " ";

    return 0;
}