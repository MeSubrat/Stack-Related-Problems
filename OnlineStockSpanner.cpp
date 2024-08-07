#include<bits/stdc++.h>
using namespace std;
class StockSpanner{
    public:
    vector<int> arr;
    StockSpanner()
    {
        arr={};
    }
    int next(int val)
    {
        arr.push_back(val);
        int cnt=1;
        for(int i=arr.size()-2;i>=0;i--)
        {
            if(arr[i]<=val)
            {
                cnt++;
            }
            else break;
        }
        return cnt;
    }
};

int main()
{
    vector<int> arr={7,2,1,3,3,1,8};
    StockSpanner s;
    StockSpanner(arr);
    cout<<s.next(arr[0]);
}