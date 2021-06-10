#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
       
        char str[x][100];
        for (int i = 0; i < x; i++)
        {
            scanf(" %s", str[i]);
        }

        int a = 0;
        for (int i = 0; i < x; i++)
        {
            if ((str[i][0] >= 'a') && (str[i][0] <= 'z'))
            {
                if ((str[i][0] >= 'a') && (str[i][0] <= 'm'))
                {
                    for (int j = 0; str[i][j] != '\0'; j++)
                    {
                        if (!(str[i][j] >= 'a' && str[i][j] <= 'm'))
                        {
                            a = 1;
                            break;
                        }
                    }
                }
                else
                {
                    a = 1;
                }
            }
            else
            {
                if (str[i][0] >= 'N' && str[i][0] <= 'Z')
                {
                    for (int j = 0; str[i][j] != '\0'; j++)
                    {
                        if (!(str[i][j] >= 'N' && str[i][j] <= 'Z'))
                        {
                            a = 1;
                            break;
                        }
                    }
                }
                else
                    a = 1;
            }
            if (a == 1)
                break;
        }
        if (a == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}