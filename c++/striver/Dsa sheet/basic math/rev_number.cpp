#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
// {
//     int y = x;
//     // if(x<0){
//     //     string s=to_string(x);
//     //     for(int i=1;i<s.length();i++){

//     //     }
//     // }
//     if(y<0)x=abs(x);
//     int ans = x % 10;
//     // cout<<ans<<endl;
//     x = x / 10;
//     // cout<<x<<endl;
//     while (x != 0)
//     {
//         int temp=x%10;
//         // cout<<temp<<" "<<endl;
//         // ans = ans + ((x % 10) * 10);
//         cout<<ans<<endl;
//          if((double)INT_MAX/ans<=10.0)
//                 return 0;
//         ans=(ans*10)+temp;
//         x /= 10;
//         // cout<<ans<<" "<<x<<endl;
//     }
//     if (y < 0)
//         ans *= (-1);
//     return ans;
// }

{
 int reverse = 0 ; 
        while(x!=0){
            int lastdigit = x%10 ; 
            if(reverse > INT_MAX/10 || reverse < INT_MIN/10){
                return 0 ; 
            }
            reverse = (reverse*10)+ lastdigit ; 
            x = x/10 ;
        }
        return reverse ; }
int main()
{
    int n;
    cin >> n;
    int x = reverse(n);
    cout << x;

    return 0;
}