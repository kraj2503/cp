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
        int a,b,c;
        cin>>a>>b>>c;
        a=a+b+c;
        if(a==180)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}