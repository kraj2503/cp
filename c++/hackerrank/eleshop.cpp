#include <bits/stdc++.h>
using namespace std;


int main(){
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int i = 0;i < n;i++){
       cin >> keyboards[i];
    }
    vector<int> pendrives(m);
    for(int i = 0;i < m;i++){
       cin >> pendrives[i];
    }
    int res=-1;
    for(int i =0;i<n;i++) for(int j=0;j<m;j++) if (keyboards[i]+pendrives[j] <= s) res = max(res, keyboards[i]+pendrives[j]);
        cout << res << "\n";
    return 0;
}