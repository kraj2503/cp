void frequencyCount(vector<int> &arr, int N, int P)
{
    // Create a frequency array and store the frequency
    //  of all the element
    int maxi = max(P, N);
    vector<int> count(maxi + 1, 0);
    for (int i = 0; i < N; i++)
    {
        count[arr[i]] += 1;
    }
    for (int i = 0; i < N; i++)
    {
        arr[i] = count[i + 1];
    }
}