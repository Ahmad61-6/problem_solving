#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,max=0,temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        temp=(a+max)-b;
        if(temp<0){
            max=0;
        }
        else
        max=temp;

    }
    cout<<max;
    return 0;
}