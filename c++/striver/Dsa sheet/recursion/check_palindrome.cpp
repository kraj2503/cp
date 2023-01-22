#include <bits/stdc++.h>
using namespace std;

int func(string s)
{
    int n = s.size();
    if (n == 1)
        return 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i-1]){
        cout<<s[i]<<" "<<s[n-1]<<endl;
            return -1;}
    }
    return 0;
}
int main()
{
    cout << func("abba") << endl;

    return 0;
}