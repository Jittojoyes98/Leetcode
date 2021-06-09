#include<bits/stdc++.h>
using namespace std;

bool precedence(char a, char b){
    map<char,int>m;
    m['^']=3;
    m['*']=m['/']=2;
    m['+']=m['-']=1;

    if(m[a]==m[b]){
        if(a=='^'){
            return false;
        }
        else{
            return true;
        }
    }
    else if(m[a]>m[b]){
        return true;
    }
    return false;

}

string infixToPostfix(string s){
    string postFixString="";
    stack<char>res;
    int n=s.size();
    for(int i=0;i<n;i++){
        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z')){
            postFixString+=s[i];
        }
        else{
            if(res.empty() or s[i]=='('){
                res.push(s[i]);
            }
            
            else if(s[i]==')'){
                while(!res.empty() and res.top()!='('){
                    postFixString+=res.top();
                    res.pop();
                }
                res.pop();
            }

            else{
                while(!res.empty() and res.top()!='(' and  precedence(res.top(),s[i])){
                    postFixString+=res.top();
                    res.pop();
                }
                res.push(s[i]);
            }
            
        }
    }
    while(!res.empty()){
        postFixString+=(res.top());
        res.pop();
    }
    return postFixString;
}

int main(){
    string s;
    cin>>s;
    cout<<infixToPostfix(s);
    return 0;
}