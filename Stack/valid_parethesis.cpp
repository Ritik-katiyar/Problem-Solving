class Solution {
private:
    bool helpme(stack<char>st,char ch){
        if(!st.empty()){
            if(st.top() =='(' and ch==')') return true;
            else if(st.top() =='[' and ch==']') return true;
            else if(st.top() =='{' and ch=='}') return true;
            else return false;
        }
        return false;
    }
public:
    bool isValid(string s) {
        if(s[0]==')' or s[0]=='}' or s[0]==']') return false;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                st.push(s[i]);
            }
            else{
                bool t=helpme(st,s[i]);
                if(t==true){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};