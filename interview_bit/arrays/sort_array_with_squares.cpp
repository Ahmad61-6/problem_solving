#include<bits/stdc++.h>

using namespace std;

class Solution {

    public:
    vector<int> solve(vector<int> &A);
};


vector<int> Solution::solve(vector<int>& A) {
    vector<int> ans(A.size());

    for (int i = 0; i < A.size(); i++) {
        ans[i] = A[i] * A[i];
    }

    sort(ans.begin(), ans.end()); 

    return ans; 
}

int main(){
    Solution s ;
    vector<int> arr = {-6, -3, -1, 2, 4, 5};

    vector<int> ans = s.solve(arr);

    for(int i = 0 ;i<arr.size();i++){
        cout << ans[i]<<endl;
    }

    return 0 ;
}