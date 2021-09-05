#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int maxsumarray(vector<int> &nums)
{
    int n = nums.size();
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}
int main()
{

    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};

    cout << maxsumarray(nums);

    return 0;
}