#include<bits/stdc++.h>
using namespace std;


//BRUTE FORCE APPROACH
vector<int> NSE(vector<int> &arr) //-->NOT WORKING
{
    vector<int> nse(arr.size(),-1);
    int n=arr.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i]){
                nse[i]=arr[j];
                break;
            }
        }
    }
    return nse;
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
    vector<int> arr={4,5,2,10,8};
    vector<int> ans=NSE(arr);
    print(ans);
}