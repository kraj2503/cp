#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    int ans = 0;
    int i = 0;
    while (ans != arr[n - 1])
    {
        ans = arr[ans-1];
        i++;
        // cout<<ans<<" "<<arr[ans-1];
    }

    return i;
}

int main()
{

    int arr[] = {1, 3, 4, 8, 9, 2, 7, 6, 8, 9};
    int n = 11;
    cout << minJumps(arr, n);
    return 0;
}