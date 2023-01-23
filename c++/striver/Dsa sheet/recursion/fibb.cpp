#include <bits/stdc++.h>
using namespace std;

vector<long long> v={1};
// Function to return list containing first n fibonacci numbers.
vector<long long> printFibb(int n)
{
    if (v.size() == n)
        return v;
    // code here
    else if ((n >= 2) && v.size() < 2)
    {
        v.push_back(1);
        return printFibb(n);
    }
    
    v.push_back(v.back() +(v[v.size()-2]));
    return printFibb(n);
}
int main()
{
    vector<long long> q = printFibb(2);
    for(auto w:q)cout<<w<<" ";
    return 0;
}