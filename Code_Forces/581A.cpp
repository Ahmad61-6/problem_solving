#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2],result;
    for(int i=0;i<2;i++){
        cin>>arr[i];
    }
    if(arr[0]<arr[1]){
    cout<<arr[0];
    result = (arr[1]-arr[0])/2;
    }
    else{
        cout<<arr[1];
    result = (arr[0]-arr[1])/2;
    }
    cout<<" "<<result<<endl;
    return 0;
}
