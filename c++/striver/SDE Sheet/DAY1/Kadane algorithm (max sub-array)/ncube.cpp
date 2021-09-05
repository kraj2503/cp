#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int maxsumarray(vector<int> &nums)
{
    int n = nums.size();
    int i, j, k, maxi = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int sum = 0;
            for (k = i; k < j; k++)
            {
                sum += nums[k];
                maxi = max(maxi, sum);
            }
        }
    }
    cout << maxi << endl;

    return 0;
}

int main()
{

    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};

    int x = maxsumarray(nums);

    return 0;
}