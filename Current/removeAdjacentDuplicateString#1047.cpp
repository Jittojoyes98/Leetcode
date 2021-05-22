class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        st.push(s[0]);
        int n=s.size();
        for(int i=1;i<n;i++){
            st.push(s[i]);
            while(st.size()>=2){
                int a=st.top();
                st.pop();
                int b=st.top();
                if(a==b){
                    st.pop();
                }
                else{
                    st.push(a);
                    break;
                }
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};