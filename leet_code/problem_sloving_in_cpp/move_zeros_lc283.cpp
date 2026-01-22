#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums){
    int zeroPosition = 0;
    int swapCount = 0;

    for( int i = 0 ; i < nums.size();i++){
        if(nums[i] != 0){
          if(i > zeroPosition){
            swap(nums[i], nums[zeroPosition]);
             zeroPosition++;
            swapCount++;
          }
           
        }
        
    }
    for(int num : nums){
        cout << num << " ";
    }
    cout<< swapCount;

}
void moveZeroes2(vector<int>& nums){
    int zeroP = 0;
    int count = 0;

     for( int i = 0 ; i < nums.size();i++){
        if(nums[i] != 0){
          
            swap(nums[i], nums[zeroP]);
            count++;
            zeroP++;
        }
        
    }
    for(int num : nums){
        cout << num << " ";
    }
    cout<< count;

}
 int main(){
        vector<int> arr = {0,1,0,3,12};
        moveZeroes(arr);
        cout<< "\n";
        moveZeroes2(arr);
        return 0;
    }