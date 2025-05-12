#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1){
        r=1;
        break;
        }
    }
    if(r==1)
    cout<<"hard";
    else
    cout<<"easy";
    return 0;
}