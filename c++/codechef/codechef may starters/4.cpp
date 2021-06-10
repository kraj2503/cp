#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    { int count =0;
        int n, k, f, q;
        cin >> n >> k >> f;

        int start[n], end[n];
        for (int i = 0; i < n; i++)
        {
            cin >> start[i] >> end[i];
        }
        for (int j = 1; j < n; j++)
        {
            if (start[j] - end[j - 1] >= k)
            {
                cout << "YES" << endl;
               
               count++;
               break;
            }
        
             else if (f - end[n - 1] >= k)
        {
            cout << "YES" << endl;
            count++;
            
        }
        }
        if(count==0)
        {
            cout << "NO" << endl;
              
        }
    }
    return 0;
}