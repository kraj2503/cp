#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, anw = INT_MAX;
    

    cin >> a >> b;
    string s;
    cin >> s;
    int ar1[a];
    int count = 0;
    for (int i = 1; i < a; i++)
    {
        if (s[i -1] != s[i])
        {
            count++;
            ar1[i] = count;
        }
        else
            ar1[i] = count;
    }
    ar1[0] = 0;
    for (int i = a - 1; i >= 0; i--)
    {
        if ((i - (b -1)) < 0)
            break;
        int check = ar1[i] - ar1[i - (b - 1)];
        if(s[i]=='0')check++;
       anw = min(anw, check);
    }
    cout<<anw<<endl;
    }
    return 0;
}