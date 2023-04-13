#include<bits/stdc++.h>
using namespace std;
vector<int> NSL(vector<int>v){
    stack<int>st;
    vector<int> res;
    for(int i=0;i<v.size();i++){
        if(st.empty()){
            res.push_back(-1);
        }
        else if(!st.empty() and st.top()<v[i]){
            res.push_back(st.top());
        }
        else if(!st.empty() and st.top()>v[i]){
            while(!st.empty() and st.top()>v[i]){
                st.pop();
            }
            if(st.empty()) res.push_back(-1);
            else res.push_back(st.top());
        }
        st.push(v[i]);
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter The Size Of Array"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter The Array Element"<<endl;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    cout<<"The Array Elements Are :: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    vector<int>res=NSL(v);
    cout<<endl;
    cout<<"The NSL is :: ";
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}