#include <bits/stdc++.h>
using namespace std;

vector<int> max_unsorted_subarray(vector<int>& arr){
    int n = arr.size();
    int start = -1, end = -1;
    vector<int> result;

   
    for(int i = 0 ; i < n - 1 ; i++){
        if(arr[i] > arr[i+1]){
            start = i;
            break;
        }
    }

   
    if(start == -1){
        result.push_back(-1);
        return result;
    }

    
    for(int i = n-1 ; i > 0 ; i--){
        if(arr[i] < arr[i-1]){
            end = i;
            break;
        }
    }

    
    int sub_min = *min_element(arr.begin() + start , arr.begin() + end + 1);
    int sub_max = *max_element(arr.begin() + start , arr.begin() + end + 1);

    
    for (int i = 0; i < start; i++) {
        if (arr[i] > sub_min) {
            start = i;
            break;
        }
    }

    
    for (int i = n - 1; i > end; i--) {
        if (arr[i] < sub_max) {
            end = i;
            break;
        }
    }

    result.push_back(start+1);
    result.push_back(end+1);
    return result;
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    vector<int> result = max_unsorted_subarray(arr);

    if(result.size() == 1 && result[0] == -1){
        cout << -1 << endl;
    }
    else {
        for(int i = 0; i < result.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
