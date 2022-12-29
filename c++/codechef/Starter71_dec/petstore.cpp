// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#define ll long long int
using namespace std;

int main() {
	
	ll t;cin>>t;
	while(t--){
    int n;
    cin>>n;
    unordered_map<int ,int> pet;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        pet[s]++;
    }
    int ans=0;
    for(auto i:pet){
        if(i.second%2!=0)
        {
        ans=1;
        break;
    }}
    if(ans==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
	}
	return 0;
}