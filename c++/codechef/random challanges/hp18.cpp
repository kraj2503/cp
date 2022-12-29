#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	
	ll t;cin>>t;
	while(t--){
	    int N,a,b;
	    cin>>N>>a>>b;
	    vector<int> v(N) ;
	    for(int i = 0 ;i<N;++i)cin>>v[i];
	    int both = 0 ,A=0,B=0;
	    for(auto e:v){
	        if(e%a==0 &&e%b==0)both++;
	        else if(e%a==0)A++;
	        else if(e%b==0)B++;
	    }
	    cout<<(A>B-(both>0)?"BOB\n": "ALICE\n");
	    
	}
	return 0;
}