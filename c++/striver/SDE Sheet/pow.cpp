#include<bits/stdc++.h>
using namespace std;
 
int majorityElement(vector<int>& nums) {
        int farr[nums.size()];
        int t = nums.size()/2;
        
        for(int i = 0 ; i < nums.size();i++){
            farr[nums[i]]++;
            if(farr[nums[i]]>=t){
                return nums[i];
            }
        }
    }

int main(){
  vector<int> nums = {3,2,3,2};
  cout<<majorityElement(nums);
}