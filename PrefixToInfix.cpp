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


string prefixToInfix(string s)
{
    int i=s.length()-1;
    stack<string> st;

    while(i>=0)
    {
        if(operand(s[i])){
            st.push(string(1,s[i]));
        }
        else{
            string t1=st.top();
            st.pop();
            string t2=st.top();
            st.pop();

            st.push('('+t1+s[i]+t2+')');
        }
        i--;
    }
    return st.top();
}

int main()
{
    string s="*+PQ-MN";
    cout<<prefixToInfix(s);
}