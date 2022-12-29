// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int main() {
	
	ll t;cin>>t;
	while(t--){
	  int n;
      cin>>n;
      vector<int> a(n);
      vector<int> b(n);
      for(int i = 0;i<n;++i){
        cin>>a[i];
      }
      for(int i = 0;i<n;++i){
        cin>>b[i];
      }
int S=0,sum=0;
for(int i=0;i<n;i++){
    if((a[i]!=0)&&(b[i]!=0))S++;
    else{
        sum = max(sum,S);
        S=0;
    }
    
    
}
 cout<<max(S,sum)<<endl; 
//  cout<<S<<" "<<sum<<endl;  

	}
	return 0;
}