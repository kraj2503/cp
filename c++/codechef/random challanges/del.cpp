#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100];
    int n, i;
    cin >> n;
    n+=2;
   for(i=1;i<n-1;i++) {
            int T, t;

            cin >> T;

            int count = 0;

            for (int i = 0; i < T; i++)
            {
                cin >> a[i];
            }
          for(t=0;t<T;t++)
            {
                if (t != 0 && t != T - 1 && a[t] > a[t - 1] && a[t] > a[t + 1])
                    count++;
            }

            cout << count << endl;
        }
    
    return 0;
}