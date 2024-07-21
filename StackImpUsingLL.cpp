#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int x)
    {
        data=x;
        next=nullptr;
    }
};
class StackImpUsingLL{
    public:
    Node* top=NULL;
    int size=0;
    void push(int x)
    {
        Node* temp=new Node(x);
        temp->next=top;
        top=temp;
        size++;
    }
    int Top()
    {
        return top->data;
    }
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty";
            return;
        }
        Node* popedEl=top;
        top=top->next;
        cout<<popedEl->data<<" has been popped"<<endl;
        size--;
    }
    void traverse()
    {
        Node* temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        // cout<<"\n";
    }
    int Size()
    {
        return size;
    }
};

int main()
{
    StackImpUsingLL st;
    st.push(5);
    st.push(6);
    st.push(7);
    // st.traverse();
    // st.pop();
    // st.traverse();
    // cout<<st.Top();
    cout<<st.Size();
}