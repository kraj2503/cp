#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    int p1, p2, p1_max_lead = -1, p2_max_lead = -1, max_of1 = -1, max_of2 = -1;
    cin >> t;
    while (t--)
    {
        cin >> p1 >> p2;
        if (p1 > p2)
        {
            p1_max_lead = p1 - p2;
            max_of1 = max(max_of1, p1_max_lead);
        }
        else
        {
            p2_max_lead = p2 - p1;
            max_of2 = max(max_of2, p2_max_lead);
        }
    }
    if (max_of1 > max_of2){
        cout<<"1 "<<max_of1;
    }
    else {
        cout<<"2"<<max_of2;
    }
        return 0;
}