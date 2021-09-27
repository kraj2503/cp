// need to debug the output last elemnt shouldcome first

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int m = intervals.size();
        if(m==0)
            return res;
        int n = intervals[0].size();


        
        for(int i=0; i<intervals.size(); i++){
            int tru = 0;
            
            for(int j=i+1; j<intervals.size(); j++){
                
                int a = intervals[i][0];
                int b = intervals[i][1];
                
                int c = intervals[j][0];
                int d = intervals[j][1];
                
                if((a>=c && a<=d) || (b>=c && b<=d) || (c>=a && c<=b) || (d>=a && d<=b)){
                    intervals.erase(intervals.begin()+i);
                    intervals.erase(intervals.begin()+j-1);
                    intervals.push_back({min(a,c), max(b,d)});
                    i--;
                    tru = 1;
                    break;
                }                                            
            }
            if(tru==0)
                res.push_back({intervals[i][0], intervals[i][1]});
        }

        sort(res.begin(), res.end());
      return res;
    }
};
int main()
{
    Solution s1;
    vector<vector<int>> intervals= {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> sol = s1.merge(intervals);
    
      for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << sol[i][j] << " ";
        }   
        cout << endl;
    }
   

    return 0;
}
