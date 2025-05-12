#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>t;
        if(t==1||t==2)
        cout<<0<<endl;
        else
        cout<<(t-1)/2<<endl;
        }
    return 0;
}