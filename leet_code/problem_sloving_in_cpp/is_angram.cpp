#include<iostream>
#include<set>
using namespace std;

bool isAnagram(string s, string t){
    if(s.length() != t.length()){
        return false;
    }
    set<char> uniqueValue;
    for(int i = 0 ; i < s.length(); i++){
        uniqueValue.insert(s[i]);
    }

    for(int i = 0 ; i < t.length();i++){
        if(!uniqueValue.count(t[i])){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "rat";
    string t ="cat";
    cout<<isAnagram(s,t);
}