#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int q, w, e;
        q = abs(c - a) + abs(d - b);
        if (q == k)
        {
            printf("YES\n");
        }
        else if (q > k)
        {cout<<"NO"<<endl;}
        else if((k-q)%2==0)
            cout<<"YES"<<endl;
        else
            printf("NO\n");
        //for(int i=0;i<k;i++)
    }

    return 0;
}