#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int

class solution
{
public:
    int maxSubarray(vector<int> &nums)
    {
        int sum = 0;
        int maxi = INT_MIN;
        for (auto it : nums)
        {
            sum += it;
            maxi = max(sum, maxi);
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};

int main()
{
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    solution s1;
    cout << s1.maxSubarray(nums);

    return 0;
}