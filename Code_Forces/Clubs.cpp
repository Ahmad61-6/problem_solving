#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int m;
    cin >> m;

    vector<int> a(m);
    int total_students = 0;
    for (int i = 0; i < m; i++) {
        cin >> a[i];
        total_students += a[i];
    }

    vector<vector<long long>> dp(m + 1, vector<long long>(total_students + 1, 0));

    dp[0][total_students] = 1;

    for (int i = 1; i <= m; i++) {
        for (int j = 0; j <= total_students; j++) {
            for (int k = 0; k <= a[i - 1] && j + k <= total_students; k++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j + k] * k) % MOD;
            }
        }
    }

    long long total_days = 0;
    for (int j = 0; j <= total_students; j++) {
        total_days = (total_days + dp[m][j] * j) % MOD;
    }

    long long total_ways = 1;
    for (int i = 1; i <= total_students; i++) {
        total_ways = (total_ways * i) % MOD;
    }

    long long ans = (total_days * total_ways) % MOD;
    cout << ans << endl;

    return 0;
}
