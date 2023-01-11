#include <bits/stdc++.h>
using namespace std;


/*

    A
   ABA
  ABCBA
 ABCDCBA

*/
int main()
{

    int n = 4;
    // for(int i =0;i<n;i++){
    //     char A='A';
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<A++;
    //     }

    //     for(int j=0;j<=i;j++){
    //         cout<<A--;
    //     }
    //     cout<<endl;
    // }

    for (int i = 1; i <= n; i++)
    {char A='A';
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j + 65 - 1);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << (char)(j + 65 - 1);
        }
        cout << endl;
    }

    return 0;
}