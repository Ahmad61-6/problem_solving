#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumGap(vector<int> &A);
};

int Solution::maximumGap(vector<int> &A){
    if(A.size()<2 && max(A.begin(),A.end()) == min(A.begin(),A.end())){
        return 0;
    }
    
   
}

int main() {
    Solution s;
    vector<int> nums = {3, 6, 9, 1};
    cout << s.maximumGap(nums) << endl;

    return 0;
}

