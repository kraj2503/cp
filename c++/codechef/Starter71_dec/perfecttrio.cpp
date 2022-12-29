// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int main() {
	
	ll t;cin>>t;
	while(t--){
	   vector<int> v(3);
       for(int i=0;i<3;++i){
        cin>>v[i];
       }
    sort(v.begin(),v.end());
    if(v[0]+v[1]==v[2])cout<<"YES\n";
    else 
    cout<<"NO\n";

	}
	return 0;
}