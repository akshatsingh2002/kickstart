#include <iostream>
#include <vector>

using namespace std;

int maxCommonSubsequence(string& s1, string& s2, int k) {
    int n = s1.length();
    int m = s2.length();

    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(k + 1, 0)));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            for (int x = 0; x <= k; ++x) {
                dp[i][j][x] = max(dp[i - 1][j][x], dp[i][j - 1][x]);

                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j][x] = max(dp[i][j][x], dp[i - 1][j - 1][x] + 1);
                }

                if (x > 0) {
                    dp[i][j][x] = max(dp[i][j][x], dp[i - 1][j - 1][x - 1] + 1);
                }
            }
        }
    }

    return dp[n][m][k];
}

int main() {
    string s1 = "australia";
    string s2 = "yqxtuzmvbk";
    int k = 1;

    int result = maxCommonSubsequence(s1, s2, k);

    cout << "Maximum length of common subsequence after operations: " << result << endl;

    return 0;
}
