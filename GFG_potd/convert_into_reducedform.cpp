#include <bits/stdc++.h>
using namespace std;

void convert(int arr[], int n)
{
    int temp[n];
    memcpy(temp, arr, n * sizeof(int));

    sort(temp, temp + n);

    unordered_map<int, int> umap;

    int val = 0;
    for (int i = 0; i < n; i++)
        umap[temp[i]] = val++;

    for (int i = 0; i < n; i++)
        arr[i] = umap[arr[i]];
}

int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8, 9, 12, 13, 14, 15, 65, 76, 34, 57, 98, 67, 123, 3425, 3414};
    int n = arr.size() / arr[0].size();
    convert(&arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
