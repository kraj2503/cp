#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution
{
public:
    ll getp(ll a, ll b)
    {
        static ll mod = 100000007;
        if (b == 0)
            return 1;
        if (b == 1)
            return a;

        if (b % 2 == 0)
        {

            ll answer = getp(a, b / 2);
            return (answer * answer) % mod;
        }
        else
        {
            ll answer = getp(a, ((b - 1) / 2));
            return ((a * answer) % mod * answer) % mod;
        }
    }

    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> res;
        int m = intervals.size();
        if (m == 0)
            return res;
        int n = intervals[0].size();

        for (int i = 0; i < intervals.size(); i++)
        {
            int tru = 0;

            for (int j = i + 1; j < intervals.size(); j++)
            {

                int a = intervals[i][0];
                int b = intervals[i][1];

                int c = intervals[j][0];
                int d = intervals[j][1];

                if ((a >= c && a <= d) || (b >= c && b <= d) || (c >= a && c <= b) || (d >= a && d <= b))
                {
                    intervals.erase(intervals.begin() + i);
                    intervals.erase(intervals.begin() + j - 1);
                    intervals.push_back({min(a, c), max(b, d)});
                    i--;
                    tru = 1;
                    break;
                }
            }
            if (tru == 0)
                res.push_back({intervals[i][0], intervals[i][1]});
        }

        sort(res.begin(), res.end());
        return res;
    }
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> mergedIntervals;
        if (intervals.size() == 0)
        {
            return mergedIntervals;
        }
        sort(intervals.begin(), intervals.end());
        vector<int> tempInterval = intervals[0];

        for (auto it : intervals)
        {
            if (it[0] <= tempInterval[1])
            {
                tempInterval[1] = max(it[1], tempInterval[1]);
            }
            else
            {
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
    }
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
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};

    // cout << maxsumarray(nums);
    Solution s1;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> sol = s1.merge(intervals);
    int x[10], y[10];
    for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
    int n;
    cin >> n;
    int str[n], count[n], result, max, len = n;
    for (int i = 0; i < len; i++)
    {
        count[str[i]]++;
        if (max < count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int i;
        cin >> i;
        while (i--)
        {
            string a;

            int count = 0;
            for (int j = 0; i < a.length(); i++)
            {
                if ((a[j] >= 'a') && (a[j] <= 'm'))
                {
                    if ((a[j + 1] >= 'M') && (a[j + 1] <= 'Z'))
                    {
                        cout << "NO" << endl;
                        count++;
                        break;
                    }
                }
                else if ((a[j + 1] >= 'M') && (a[j + 1] <= 'Z'))
                {
                    if ((a[j] >= 'a') && (a[j] <= 'm'))
                    {
                        cout << "NO" << endl;
                        count++;
                        break;
                    }
                }
            }
            if (count != 0)
                cout << "YES" << endl;
        }
    }
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int n, k, i = 0, count1 = 0;
        cin >> n >> k;
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum1 = 0;
        int sum2 = 0;
        int count2 = 0;
        //  int c = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n, greater<int>());
        for (i = 0; i < (n); i++)
        {
            if ((i % 2 == 0) && (count1 != k))
            {
                sum1 += arr[i];
                count1++;
            }
            if (i % 2 != 0)
            {
                sum2 += arr[i];
                count2++;
            }
            if (count2 == k)
                break;
        }
        if (i != n - 1)
            sum2 += arr[i + 1];
        cout << max << endl
             << (sum1, sum2) << endl;
        // for (int i = 1; i < n; i += 2)
        // {
        // }
        // sum2+=arr[(2*k)-1];
        //sum2 += arr[(2 * k)];
        // if (sum1 >= sum2)
        // {
        //     cout << sum1 << endl;
        // }
        // else
        //     cout << sum2 << endl;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[k];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        int t;
        cin >> t;
        while (t--)
        {
            int x, m, d;
            cin >> x >> m >> d;
            m = m * x;
            d = x + d;
            int res = min(m, d);
            cout << res << endl;
        }

        int max = 0;

        for (int i = 0; i < k; i++)
        {
            if (max <= a[i])
                max = a[i];
        }
        int temp[max + 1] = {0};
        for (int i = 0; i < k; i++)
            temp[a[i]]++;

        int ans[k] = {0};
        int j = 0;
        for (int i = 0; i < max + 1; i++)
        {
            if (temp[i] > 1 && !(i >= n + 1 && i <= n + m))
            {
                ans[j] = i;
                j++;
            }
        }
        cout << j << " ";
        for (int i = 0; i < j; i++)
            cout << ans[i] << " ";

        cout << endl;
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n], b[m];
        for (auto &i : a)
            cin >> i;
        for (auto &o : b)
            cin >> o;

        for (ll i = 0; i <= m - 1; i++)
        {

            ll flag = 0;
            ll ans;
            if ((a[b[i] - 1] != 0) || (b[i] - 1 == 0))

                cout << "0 ";
            continue;
            //             }

            //             ll x = b[i] - 1;
            //             ll y = b[i] + 1;
            //             ll k1 = INT_MAX;
            //             ll k2 = INT_MAX;
            //             while (x >= 0)
            //             {
            //                 if (a[x] == 1)
            //                 {
            //                     flag = 1;
            //                     k1 = (a[i] - x);
            //                     break;
            //                 }
            //                 x--;
            //             }
            //             while (y < n)
            //             {
            //                 if (a[y] == 2)
            //                 {
            //                     flag = 1;
            //                     k2 = (y - b[i]);
            //                     break;
            //                 }
            //                 y++;
            //             }
            //             if (flag)
            //             {
            //                 ans = min(k1, k2);
            //             }
            //             if (!flag)
            //             {
            //                 ans = -1;
            //             }
            //             cout << ans << " ";
            //         }
            //         cout << '\n';
            //     }
            //     return 0;
            // }
            ll x = b[i] - 1;
            ll y = b[i];
            ll k1 = INT_MAX;
            ll k2 = INT_MAX;
            while (x--)
            {
                if (a[x] == 1)
                {
                    flag = 1;
                    k1 = ((b[i] - 1) - x);
                    break;
                }

                // while (y < n)
                ll p;
                for (p = 0; p <= (b[i] - 1); p++)
                {
                    if (a[y] == 2)
                    {
                        flag = 1;
                        k2 = (y - (b[i] - 1));
                        break;
                    }
                    //y++;
                }
                if (flag)
                {
                    ans = min(k1, k2);
                }
                if (!flag)
                {
                    ans = -1;
                }
                cout << ans << " ";
            }
        }
        cout << '\n';
    }
    while (n--)
        int i = 0, j = 0;
    {
        int t[100000];
        int a, q, y = 0;

        scanf("%d", &a);
        if (a % 21 == 0)
        {
            cout << "The streak is broken!" << endl;
        }
        else
        {
            for (int i = 0; a > 0; i++)
            {
                t[i] = a % 10;
                q = i;
            }
            for (int i = 0; i < q - 1; i++)
            {
                if ((t[i] == 2) && (t[i + 1] == 1))
                {
                    if (y > 0)
                    {
                        // y[i] == x[j];
                    }
                    else
                    {
                        // x[i] == y[j];
                    }
                    y++;

                    break;
                }
            }
        }
    }

    return 0;
}
