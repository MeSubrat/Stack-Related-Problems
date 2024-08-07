#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE
vector<int> slidingWindowMax(vector<int> &arr,int k)
{
    vector<int> ans;
    int n=arr.size();
    for(int i=0;i<=(n-k);i++)
    {
        int maxi=arr[i];
        for(int j=i;j<=(i+k-1);j++)
        {
            maxi=max(maxi,arr[j]);
        }
        ans.push_back(maxi);
    }
    return ans;
}
//BETTER APPROACH
vector<int> slidingWindowMaxBetter(vector<int> &arr,int k)
{
    
}


void print(vector<int> &arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    vector<int> arr={1,3,-1,-3,5,3,2,1,6};
    vector<int> ans=slidingWindowMax(arr,3);
    print(ans);
}


//WRITTEN AND EXECUTED BY SUBRAT KUMAR SAHOO!