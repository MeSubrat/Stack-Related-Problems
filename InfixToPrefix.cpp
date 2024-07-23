#include<bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    int len=s.length();
    string ans="";
    int i=len-1;
    while(i>=0)
    {
        ans+=s[i];
        i--;
    }
    return ans;

}

int priority(char ch)
{
    if(ch=='^')return 3;
    else if(ch=='*' || ch=='/')return 2;
    else if(ch=='+' || ch=='-') return 1;
    else return -1;
}

string infixToPrefix(string s)
{
    s=reverse(s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(') s[i]=')';
        else if(s[i]==')') s[i]='(';
    }
    
    int i=0;
    string ans="";
    stack<char> st;
    while(i<s.length())
    {
        if((s[i]>='A'&&s[i]<='Z')|| (s[i]>='a'&&s[i]<='z') || (s[i]>='0'&&s[i]<='9'))
        {
            ans+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if(s[i]=='^')
        {
            while(!st.empty() && priority(s[i])<=priority(st.top()))
            {
                ans+=st.top();
                st.top();
            }
        }
        else{
            while(!st.empty() && priority(s[i])<priority(st.top()))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    ans=reverse(ans);

    return ans;

}

int main()
{
    string s="(a+b)";
    cout<<infixToPrefix(s);
}