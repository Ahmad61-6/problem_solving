#include<bits/stdc++.h>
 using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=0,b=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==toupper(s[i]))
        a++;
        else 
        b++;
    }
    if(a<=b)
     transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    return 0;

}