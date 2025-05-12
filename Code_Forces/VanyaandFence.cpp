#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f,r1=0,r2=0;
    cin>>n>>f;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=f)
        r1++;
        else
        r2+=2;
    }
    cout<<r1+r2;
    return 0;
}