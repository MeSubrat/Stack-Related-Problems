#include<bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    int n=s.length();
    string res="";
    for(int i=n-1;i>=0;i--)
    {
        res+=s[i];
    }
    return res;
}

string removeKDigits(string s,int k)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        while(!st.empty() && (st.top()+'0')>(s[i]+'0') && k>0)
        {
            st.pop();
            k--;
        }
        st.push(s[i]);
    }
    while(k>0) {
        st.pop();
        k--;
    }
    if(st.empty())return 0;
    string res="";
    while(!st.empty())
    {
        res=res+st.top();
        st.pop();
    }
    res=reverse(res);
    while(res.size()!=0 && res.back()=='0'){
        res.pop_back();
    }
    if(res.empty())return "0";
    return res;
}

int main()
{
    string s="1432219";
    cout<<removeKDigits(s,3);

}

//DATE :) 30.07.2024