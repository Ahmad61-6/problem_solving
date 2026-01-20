#include<iostream>
#include<algorithm>
#include<vector>
#include <chrono>
#include <climits>
using namespace std;
using namespace std::chrono;

int maxSubArray1(vector<int>& arr){
    if(arr.size() == 1) return arr[0];

    int maxEnding = arr[0];
    int res = arr[0];

    for(int i = 1 ; i< arr.size();i++){
        maxEnding = max(arr[i],maxEnding+arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}

// drop the dead weight approach

int maxSubArray2(vector<int>& arr){
    for(int num : arr){
        int currentSum = 0;
        int maxSum = INT_MIN;

        for( int i = 0; i<arr.size();i++){
            currentSum+=arr[i];
            
            if(currentSum > maxSum){
                maxSum = currentSum;
            }
            if(currentSum < 0){
                currentSum = 0;
            }
        }
        return maxSum;
    }
}
int main(){
    vector<int> arr = {
        -2,1,-3,4,-1,2,1,-5,4
    };
    auto start = high_resolution_clock::now();
    cout<<maxSubArray1(arr);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop-start);
    cout << "Time taken: " << duration.count() << " microseconds" << endl;

    start = high_resolution_clock::now();

    cout<<maxSubArray2(arr);
    stop = high_resolution_clock::now();

    cout << "Time taken: " << duration.count() << " microseconds" << endl;

}