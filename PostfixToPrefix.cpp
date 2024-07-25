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

string postfixToPrefix(string s)
{
    stack<string> st;
    int i=0;
    while(i<s.length())
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

            st.push(s[i]+t2+t1);
        }
        i++;
    }
    return st.top();
}

int main()
{
    string s="AB-DE+F*/";
    cout<<postfixToPrefix(s);
}