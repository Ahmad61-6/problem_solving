#include<iostream>
#include<stack>
#include<map>
using namespace std;

bool isValid(string s){
    map<char,char> val;
    val[')'] = '(';
    val['}'] = '{';
    val[']'] = '[';

    stack<char> stk;

    for(int i = 0 ; i< s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stk.push(s[i]);
        }
        else{
            if(stk.empty()){
                return false;
            }
            if(val[s[i]] != stk.top()){
                return false;
            }
            else{
                stk.pop();
            }
        }
    }
   return stk.empty();
}
int main(){
    string s = "([)]";
    cout<<isValid(s);
    return 0;
}