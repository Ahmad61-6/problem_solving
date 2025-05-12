#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,g=1;
    cin>>n;
    string s[n];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1])
        g++;
    }
    cout<<g<<endl;
    return 0;
}