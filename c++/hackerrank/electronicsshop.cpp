#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll budget, l, m, temp;
    ll keyboard[l], drives[m];
    //,sum[l*m]={0};
    vector<int> sum;
    cin >> budget >> l >> m;
    for (int i = 0; i < l; i++)
    {
        cin >> keyboard[i];
    }
    for (int i = 0; i < l; i++)
    {
        cin >> drives[i];
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp = keyboard[i] + drives[j];
            if (temp <= budget)
            {
                sum.push_back(temp);
            }
        }
    }
    sort(sum.begin(), sum.end());
    if (sum.size() > 0)
        cout << sum.back();
    else
    {
        cout << "-1" << endl;
    }
    // cout<<sum.rend()<<" "<<sum.crend()<<" "<<sum.end()<<endl;
    return 0;
}