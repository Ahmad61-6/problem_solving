#include<iostream>
#include<string>
using namespace std;
 int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
 }


 string gcdOfStrings(string str1, string str2){

    if((str1+str2)==(str2+str1)){
        int length = gcd(str1.length(),str2.length());
        return str1.substr(0,length);
    }
    else{
        return "";
    }

 }


 int main(){
    string str1 = "ABABAB";
    string str2 = "ABAB";
    cout<<gcdOfStrings(str1,str2);
 }