#include <bits/stdc++.h>
using namespace std;
#define ll long long int
  void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i][6];
        keyi = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j][6] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = keyi[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

return 0;
}