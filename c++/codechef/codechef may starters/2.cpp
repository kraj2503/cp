#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int i;
        cin >> i;
        while (i--)
        {
            string a;
           
            int count = 0;
            for (int j = 0; i < a.length(); i++)
            {
                if ((a[j] >= 'a') && (a[j] <= 'm'))
                {
                    if ((a[j + 1] >= 'M') && (a[j + 1] <= 'Z'))
                    {
                        cout << "NO" << endl;
                        count++;
                        break;
                    }
                }
                else if ((a[j + 1] >= 'M') && (a[j + 1] <= 'Z'))
                {
                    if ((a[j] >= 'a') && (a[j] <= 'm'))
                    {
                        cout << "NO" << endl;
                        count++;
                        break;
                    }
                }
            }
            if(count!=0)
            cout<<"YES"<<endl;
        }
    }

    return 0;
}