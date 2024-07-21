#include<bits/stdc++.h>
using namespace std;
class stackImp{
    public:
    int top=-1;
    int st[10];

    void push(int x)
    {
        if(top>=10){
            cout<<"Stack is full..";
            return ;
        } 
        st[++top]=x;
    }
    int Top()
    {
        if(top>=10){
            cout<<"Stack is full!!";
        }
        return st[top];
    }
    void pop()
    {
        if(top==-1){
            cout<<"Stack is empty";
            return;
        }
        top--;
    }
    int size()
    {
        if(top>=10){
            cout<<"Stack is full..";
        }
        return top+1;
    }
    void traverse()
    {
        for(int i=0;i<=top;i++)
        {
            cout<<st[i]<<" ";
        }
    }
};
int main()
{
    stackImp st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(7);
    st.pop();
    st.traverse();
}