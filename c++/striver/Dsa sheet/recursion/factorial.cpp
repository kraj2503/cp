#include <bits/stdc++.h>
using namespace std;


vector<long long> v={1};
int n=1;
    vector<long long> factorialNumbers(long long N)
    {
    if(v.back()*(n+1)>N)return v;
    v.push_back(v.back()*(n+1));
    // cout<<v.back()<<" "<<n+1<<endl;
    n++;
        return factorialNumbers(N);
    }

int main()
{
vector<long long> q=factorialNumbers(54);
for(auto nm:q)cout<<nm<<" ";
    return 0;
}
