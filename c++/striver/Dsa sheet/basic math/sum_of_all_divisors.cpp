#include<bits/stdc++.h>
using namespace std;
long long sumOfDivisors(int N)
    {
        // Write Your Code here
       long long int ans=0;
        for(int i=1;i<=N;++i)
        {
                ans+=(N/i)*i;
        }
        return ans;
    }
int main(){
    cout<<sumOfDivisors(4);
  
  return 0;
}