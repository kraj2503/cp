#include <bits/stdc++.h>
using namespace std;

int solve(int N, string S) {
    int n = S.size();
    int dp[n][2];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = (S[0] == 'a' || S[0] == 'e' || S[0] == 'i' || S[0] == 'o' || S[0] == 'u');
    dp[0][1] = !dp[0][0];

    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = dp[i - 1][0];
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') {
            dp[i][0]++;
        } else {
            dp[i][1]++;
        }
    }
    return min(dp[n - 1][0], dp[n - 1][1]);
}

// Example usage:
int main() {
    int N = 3;
    string S = "owf";
    cout << solve(N, S) << endl; // Output: 2
    return 0;
}
