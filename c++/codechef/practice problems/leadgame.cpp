#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    int  lead = -1, winner;
    cin >> t;
    int round_lead,p1=0,p2=0;
    while (t--)
    {int a , b;
        cin>>a>>b;
        p1+=a;
        p2+=b;
        round_lead = abs(p1 - p2);
        if ((p1 > p2) && (lead < round_lead))
        {
            winner = 1;
            lead = round_lead;
        }
        else if ((p2-p1) && (lead < round_lead))
        {
            winner = 2;
            lead = round_lead;
        }
    }
    cout<<winner<<" "<<lead;

    return 0;
}