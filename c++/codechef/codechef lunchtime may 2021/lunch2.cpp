#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        int n, k,i=0,count1=0;
        cin >> n >> k;
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum1 = 0;
        int sum2 = 0;
        int count2 = 0;
        //  int c = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n, greater<int>());
        for ( i = 0; i < (n); i++)
        {
            if ((i % 2 == 0)&&(count1!=k)){
                sum1 += arr[i];count1++;}
            if(i%2!=0)
            {
                sum2 += arr[i];
                count2++;
            }
            if(count2==k)break;
        }
        if(i!=n-1) sum2+=arr[i+1];
    cout<<max(sum1,sum2)<<endl;
        // for (int i = 1; i < n; i += 2)
        // {
        // }
        // sum2+=arr[(2*k)-1];
        //sum2 += arr[(2 * k)];
        // if (sum1 >= sum2)
        // {
        //     cout << sum1 << endl;
        // }
        // else
        //     cout << sum2 << endl;
    }
    return 0;
}