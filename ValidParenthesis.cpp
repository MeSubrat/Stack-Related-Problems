#include<bits/stdc++.h>
using namespace std;

bool checkValidParethesis(string s)
{
    stack<char> st;
    bool ans=false;
    for(int i=0;i!='\0';i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty()) ans= false;
            char ch=s[i];
            st.pop();
            if(st.top()==')' && ch=='('){
                ans= true;
            }
            else if(st.top()=='}' && ch=='{')
            {
                ans= true;
            }
            else if(st.top()==']' && ch=='[')
            {
                ans=true;
            }
            
        }
    }
    return ans;
}

int main()
{
    string s="(){}[]";
    cout<<checkValidParethesis(s);
}