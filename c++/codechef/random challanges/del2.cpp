#include<bits/stdc++.h>
using namespace std;


int countPeaks(vector<int> checkpoints) {
  int peaks = 0;
  for(int i = 1; i < checkpoints.size() - 1; i++) {
     if(checkpoints[i-1] < checkpoints[i] && checkpoints[i+1] < checkpoints[i]) {
        peaks++;
     }
  }
  return peaks;
}
int main()
{
    
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
       int N;
       cin>>N;
       vector<int>checkpoints(N);
       for(int i=0;i<N;++i)
       {
        cin>>checkpoints[i];
       }
       cout<<countPeaks(checkpoints);
       cout<<"\n";
    }
 return 0;
}