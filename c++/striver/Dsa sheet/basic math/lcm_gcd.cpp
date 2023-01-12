/{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:

  
     long long gcd(long long A , long long B){
      if(B==0){
          return A;
      }
      else{
          return gcd(B,A%B);
      }
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long>v;
        long long lcm=(A*B)/gcd(A,B);
        v.push_back(lcm);
        v.push_back(gcd(A,B));
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends