#include<bits/stdc++.h>
using namespace std;
int main(){
    int count[256]={0};
    char str[1000];
    gets(str);
  int max=0;
  int result=0;
  int len=strlen(str);

  //  string :: iterator it;
     for (int i = 0; i < len; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
    // int y=0;
    // for (int  i = 0; i < 256; i++)
    // {
    //     if(y<=count[i]){
    //         y=count[str[i]];
    //         result=str[i];
    //     }
        // else if(y=count[i]){
        //     result=str[y];
        // }
    }
    
    
    cout<<(char)result<<' '<<max;
return 0;}
