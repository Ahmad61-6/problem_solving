#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name,temp;
    cin>>name;
    sort(name.begin(),name.end());
    int count=0;
    
    for(int i=0;i<name.length();i++){
        if(name[i]!=name[i-1])
        count++;
    }
    if(count%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    return 0;
}