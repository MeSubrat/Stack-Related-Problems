#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE APPROACH
vector<int> NGE2(vector<int> &arr) //-->THIS CODE IS NOT WORKING PROPERLY
{
    vector<int> nge(arr.size(),-1);
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<i+n-1;i++)
        {
            int ind=j%n;
            if(arr[ind]>arr[i])
            {
                nge[i]=arr[ind];
                break;
            }
        }
    }
    return nge;

}

vector<int> NGE2BETTER(vector<int> arr) //-->THIS CODE IS WORKING FINE!!
{
    stack<int> st;
    vector<int> nge(arr.size(),-1);
    int n=arr.size();
    for(int i=2*n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=arr[i%n])
        {
            st.pop();
        }
        if(i<n)
        {
            nge[i]=st.empty()?-1:st.top();
        }
        st.push(arr[i%n]);
    }
    return nge;
}

void print(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr={2,10,12,1,11};
    // vector<int> ans=NGE2BETTER(arr);
    vector<int> ans=NGE2(arr);
    print(ans);
}