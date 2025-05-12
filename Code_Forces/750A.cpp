#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int leftTime=240-k;
    int low=0;
    int high=n;
    int done,ans=0;

    while(low<=high){
        int mid=(low+high)/2;
        done=0.5*mid*(2*5+(mid-1)*5);
        if(done>leftTime){
            high=mid-1;
        }
        else if(done<leftTime){
            low=mid+1;
            ans=mid;
        }
        else 
        {
            ans=mid;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
