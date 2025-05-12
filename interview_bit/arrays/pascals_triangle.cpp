#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> pascalsTriangle(int numRows);
};

// vector<vector<int>> Solution::pascalsTriangle(int numRows) {
//     vector<vector<int>> pascal;

//     for (int i = 0; i < numRows; i++) {
//         vector<int> row(i + 1, 1);

//         for (int j = 1; j < i; j++) {
//             row[j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
//         }

//         pascal.push_back(row);
//     }

//     return pascal;
// }


int main() {
    Solution sol;
    vector<vector<int>> triangle = sol.pascalsTriangle(5);

    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
