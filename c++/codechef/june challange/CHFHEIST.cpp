#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll D, d, p, q, r = 0, i = 1,x;
        cin >> D >> d >> p >> q;
        // for(i=1;i<=D;i++){
        //     r+=p;
        //     if(i%d==0){
        //         p+=q;
        //     }
        // }
        // cout<<r<<endl;
        x=D/d;
        if(x%2==0){
            r+=d*((x/2)*(2*p+(x-1)*q));
        }
        else{
            r+=d*(x*(p+((x-1)/2)*q));
        }
        r+=(D%d)*(p+(x)*q);
        cout<<r<<endl;
    }
    return 0;
}