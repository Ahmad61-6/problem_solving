#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;

    for(int i=0;i<n;i++){
        int f,h;
        cin>>a>>b;

        if(a%b==0)
        {
            cout<<0<<endl;
            continue;
        }
        f=a/b;
        h=(f+1)*b;
        cout<<h-a<<endl;
        
    
    }
    return 0;
}