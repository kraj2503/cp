// time = O((n+m)*log(n+m))  (log base 2)
// space O(1)

// Shell Short Intuition

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int nextgap(int gap)
{
    if (gap > 1)
    {
        gap = (gap / 2) + gap % 2;
        return gap;
    }
    else
        return 0;
}
void merge(int *ar1, int *ar2, int n, int m)
{
    int i, j, gap = m + n;
    for (gap = nextgap(gap); gap >= 1; gap = nextgap(gap))
    {

        // comparing in first array
        for (i = 0; i + gap < n; i++)
            if (ar1[i] > ar1[i + gap])
                swap(ar1[i], ar1[i + gap]);

        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++)
            if (ar1[i] > ar2[j])
                swap(ar1[i], ar2[j]);

        if (j < m)
        {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (ar2[j] > ar2[j + gap])
                    swap(ar2[j], ar2[j + gap]);
        }
    }
}

int main()
{
    int a1[] = {10, 27, 38, 43, 87};
    int a2[] = {1, 5, 15, 23, 56, 88};
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a1) / sizeof(int);

    merge(a1, a2, n, m);

    for (int i = 0; i < n; i++)
    {
        cout << a1[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        cout << a2[i] << " ";
    }

    return 0;
}