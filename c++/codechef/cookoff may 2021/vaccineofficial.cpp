#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll tc;
	cin>>tc;
	while(tc--){
	    ll g,p,X[10];
	    cin>>g>>p;
	    for(auto &x:X)cin>>x;
	    ll before_chef=0;
	    for(ll i=g;i<10;i++)before_chef+=X[i];
	    
        
        auto days = [&](ll people){
	        return (people/p +(people%p!=0));
	    };
	    ll minn=days(before_chef+1);
	    ll maxx = days(before_chef+X[g-1]);
	    cout<<minn<<" "<<maxx<<'\n';
	    
	}

    
	return 0;
}
