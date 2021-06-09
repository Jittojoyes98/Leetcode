#include<bits/stdc++.h>
using namespace std;

bool precedence(char a, char b){
    map<char,int>m;
    m['^']=3;
    m['*']=m['/']=2;
    m['+']=m['-']=1;

    if(m[a]==m[b]){
        if(a=='^'){
            return true;
        }
        else{
            return false;// note this is the change in the post also.
        }
    }
    else if(m[a]>m[b]){
        return true;
    }
    return false;

}

string reverseReplace(string s){
    reverse(s.begin(),s.end());
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            s[i]=')';
        }
        else if(s[i]==')'){
            s[i]='(';
        }
    }
    return s;
}

string infixToPostfix(string s){
    string preFixString="";
    stack<char>res;
    int n=s.size();
    for(int i=0;i<n;i++){
        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z')){
            preFixString+=s[i];
        }
        else{
            if(res.empty() or s[i]=='('){
                res.push(s[i]);
            }
            
            else if(s[i]==')'){
                while(!res.empty() and res.top()!='('){
                    preFixString+=res.top();
                    res.pop();
                }
                res.pop();
            }

            else{
                while(!res.empty() and res.top()!='(' and  precedence(res.top(),s[i])){
                    preFixString+=res.top();
                    res.pop();
                }
                res.push(s[i]);
            }
            
        }
    }
    while(!res.empty()){
        preFixString+=(res.top());
        res.pop();
    }
    return preFixString;
}

int main(){
    string s;
    cin>>s;
    string infix=reverseReplace(s);
    string toBeReversed=infixToPostfix(infix);
    reverse(toBeReversed.begin(),toBeReversed.end());
    cout<<(toBeReversed)<<endl;
    return 0;
}