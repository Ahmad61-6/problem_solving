/*

    * Kadanes Algorithm to find the maximum subarray sum in an array.
    * Time Complexity: O(n)
    * Space Complexity: O(1)
    * We initialize two variables res and maxendinghere to store the result and the maximum sum ending at the current position respectively.
    * We iterate through the array starting from the first element.
* compare the  current element of the array with the sum of current element and the previous maximum sum.
maxendinghere = max(arr[i], maxendinghere + arr[i]);
* then in res we store the maximum value between res and maxendinghere.
    */

#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;



int kadanesAlgorithm(vector<int> &arr){
    int maxEnding = arr[0];
    int res = arr[0];

    for(int i = 1 ; i < arr.size(); i++){

        maxEnding = max(arr[i], arr[i]+ maxEnding);
        res = max(maxEnding,res);

    }
    return res;
}
int main(){
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout<<kadanesAlgorithm(arr);
    return 0;
}
