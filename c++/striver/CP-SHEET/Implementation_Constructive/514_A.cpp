#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    ll i = 0;
    cin >> str;
    if (str[0]=='9'){
        i++;
    }
    while(i<str.length())
    {
        if (str[i] > '4')
        {
            str[i] = ('9' - str[i]+'0');
        }
        i++;
    }
    cout << str;
    return 0;
}