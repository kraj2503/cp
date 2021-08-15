#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    double x=2,a=1,b=11;

         double res = (ceil((b-x)/2)+ceil((x-a)/2));
    cout<<res;

return 0;
}   ll val = ((b-x)/2) + ((b-x % 2) != 0)+((x-a)/2) + ((x-a % 2) != 0);