#include<bits/stdc++.h>
using namespace std;

bool operand(char ch)
{
    if((ch>='A' && ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
    {
        return true;
    }
    else{
        return false;
    }
}

string prefixToPostfix(string s)
{
    stack<string> st;
    int i=s.length()-1;
    while(i>=0)
    {
        if(operand(s[i]))
        {
            st.push(string(1,s[i]));
        }
        else{
            string t1=st.top();
            st.pop();
            string t2=st.top();
            st.pop();

            st.push(t1+t2+s[i]);
        }
        i--;
    }
    return st.top();
}

int main()
{
    string s="/-AB*+DEF";
    cout<<prefixToPostfix(s);
}