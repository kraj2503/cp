#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a;
	int t;
	cin>>t;
	while(t--){
	cin>>a;
	int res=0;
	for(int i=11; i>=0; i--){
		int j=pow(2,i);
		res+=a/j;
		a=a%j;
	}
	cout<<res<<endl;
	}
}