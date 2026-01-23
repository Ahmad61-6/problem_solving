#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s){
    int maxLength = 0;
    int left = 0;
    unordered_set<char> charSet;

    for(int i = 0; i < s.length() ; i++){
        if(charSet.count(s[i])){
            charSet.erase(s[left]);
            left++;
        }

        charSet.insert(s[i]);
        maxLength = max(maxLength, (i-left)+1);
    }

    return maxLength;
    
}

int main(){
    string s = " ";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}