#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	
	ll t;cin>>t;
	while(t--){
	    
	   ll n,k;
	    cin>>n>>k;
	    vector<ll> arr(n);
	    for(auto &x:arr)cin>>x;
	    ll sum1=0,sum2=0;
	    sort(arr.begin(),arr.end());
	    while(k--){
	        sum1+=arr.back(); arr.pop_back();
	        sum2+=arr.back(); arr.pop_back();
	        
	    }
	    sum2+=arr.back();
	    cout<<max(sum1,sum2)<<endl;
	}
	return 0;
}
