#include <iostream>
#include <vector>
using namespace std;

long long getMaxPoints(int N) {
    // Create a 2D vector to store the maximum points for each cell
    vector<vector<long long>> dp(N, vector<long long>(N, 0));

    // Base case: Set the points for the starting cell (1,1)
    dp[0][0] = 1;

    // Calculate the maximum points for each cell in the matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i > 0) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j] + (i + j + 1));
            }
            if (j > 0) {
                dp[i][j] = max(dp[i][j], dp[i][j - 1] + (i + j + 1));
            }
            if (i > 0 && j > 0) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + (i + j + 1));
            }
        }
    }

    // The maximum points achieved while traveling from (1,1) to (N,N) will be stored in dp[N-1][N-1]
    return dp[N - 1][N - 1];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Get the maximum points for the current test case and print the result
        cout << getMaxPoints(N) << endl;
    }

    return 0;
}
