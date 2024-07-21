#include<bits/stdc++.h>
#define SIZE 5;
using namespace std;
int stack[5];

int top=-1;

bool isEmpty()
{
    if(top==-1)return true;
    else return false;
}
bool isFull()
{
    if(top==5)return true;
    else return false;
}

void push(int x)
{
    if(isFull) cout<<"Stack is full!!";
    else
    {
        stack[++top]=x;
    }
}
void pop()
{

}
int peak()
{

}
void traverse()
{

}

int main()
{
    int ch;
    while(true)
    {
        cout<<"1.Push()\n2.Pop()\n3.Top\n4.Traverse()\n5.Exit";
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"Enter element to push: ";
            int num;
            cin>>num;
            push(num);
            break;

            case 2: pop();
            break;

            case 3: peak();
            break;

            case 4:  traverse();
            break;

            case 5: exit(1);

            default: cout<<"Enter a valid keyword!!";
            break;
        }
    }
}