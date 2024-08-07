// #include<bits/stdc++.h>
// using namespace std;

// bool checkValidParethesis(string s)
// {
//     stack<char> st;
//     // bool ans=false;
//     int n=s.length();
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='(' || s[i]=='{' || s[i]=='[')
//         {
//             st.push(s[i]);
//         }
//         else
//         {
//             if(st.empty()) return false;
//             char ch=st.top();
//             st.pop();
//             if(st.top()==')' && ch!='('){
//                 return false;
//             }
//             else if(ch=='{' && st.top()!='}')
//             {
//                 return false;
//             }
//             else if(ch=='[' && st.top()!=']')
//             {
//                 return false;
//             }
            
//         }
//     }
//     return st.empty();
// }

// int main()
// {
//     string s="(){}[]";
//     cout<<checkValidParethesis(s);
// }
#include<bits/stdc++.h>
using namespace std;

bool checkValidParenthesis(string s)
{
    stack<char> st;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty()) return false;
            char ch = st.top();
            st.pop();
            if((s[i] == ')' && ch != '(') || 
               (s[i] == '}' && ch != '{') || 
               (s[i] == ']' && ch != '['))
            {
                return false;
            }
        }
    }
    return st.empty(); // The stack should be empty if all brackets are matched
}

int main()
{
    string s = "(){}[]";
    cout << (checkValidParenthesis(s) ? "true" : "false");
    return 0;
}
