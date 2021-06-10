#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
      int g,p;
      cin>>g;
      cin>>p;
      int arr[10];
      int sum=0;
      int sum1=0;
      int sum2=0;
      int x,y;
      for(int i=0;i<10;i++){
          cin>>arr[i];
          sum=sum+arr[i];
          if(i<(g-1)){
              sum1=sum1+arr[i];
          }
          if(i<g){
              sum2=sum2+arr[i];
          }
      }
      int temp =sum1;
      sum1=sum-sum2;
      sum2=sum-temp;
      x=sum1/p;
      x=x+1;
      if(sum2%p==0){
          y=sum2/p;
      }
      else{
          y=sum2/p;
          y=y+1;
      }
      cout<<x<<" "<<y<<endl;
    }
    return 0;
}