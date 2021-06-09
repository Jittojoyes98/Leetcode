#include<bits/stdc++.h>
using namespace std;

// this is the case of postfix as well..same idea.

string prefixToPostfix(string prefix){
    stack<string>s;
    string postfx="";
    int n=prefix.size();
    for(int i=n-1;i>=0;i--){
        if(prefix[i]=='+' or prefix[i]=='-' or prefix[i]=='*' or prefix[i]=='/' or prefix[i]=='^'){
            string a=s.top();
            s.pop();
            string b=s.top();
            s.pop();
            s.push(a+b+prefix[i]);
        }
        else{
            string res="";
            // string res(1,prefix[i]); note this method also works fine,for declaration of string.
            res+=prefix[i]; 
            // cout<<res;
            s.push(res);
        }
    }
    return s.top();
}
int main(){
    string s;
    cin>>s;
    cout<<prefixToPostfix(s);
    return 0;
}