#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE APPROACH
vector<int> NGE(vector<int> &arr)
{
    vector<int> nge(arr.size(),-1);
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]>arr[i])
            {
                nge[i]=arr[j];
                break;
            }
        }
        // if(j==arr.size())nge[i]=-1;
    }
    return nge;
}

//BETTER APPROACH USING MONOTONIC STACK
vector<int> NGEBetter(vector<int> &arr)
{
    vector<int> nge(arr.size());
    stack<int> st;
    for(int i=arr.size()-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=arr[i])
        {
            st.pop();
        }
        if(st.empty()) nge[i]=-1;
        else{
            nge[i]=st.top();
        }
        st.push(arr[i]);
    }
    return nge;
}

int main()
{
    vector<int> arr={1,2,3,0,1,3,6,8};
    vector<int> ans=NGEBetter(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}

//DATE: 20th JULY 2024