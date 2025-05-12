#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cost, money, nbanana;
    cin>>cost>>money>>nbanana;
    int temp= cost;
    int tcost=0;
    for(int i =1;i<=nbanana;i++){
        temp=cost*i;
        tcost=tcost+temp;
    }
    if(tcost<=money){
        cout<<0;
    }
    else{
        cout<<tcost-money;
    }
    return 0;
}