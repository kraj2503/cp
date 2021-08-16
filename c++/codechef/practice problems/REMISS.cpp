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
        int a ,b;
        cin>>a>>b;
        cout<<max(a,b)<<" "<<a+b<<endl;
    }
return 0;
}