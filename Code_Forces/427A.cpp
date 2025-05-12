#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,result=0,input;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>input;
        if(input==-1){
            if(count>0){
            count--;
            }
            else{
                result++;
            }
        }
        else
        count+=input;
    }
    cout<<result;

}