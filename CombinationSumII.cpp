#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
    void solve(vector<int> &arr,int n,int k, int idx, int sum, vector<int> &v, set<vector<int>> &st)
    {
        if(sum == k)
        {
            st.insert(v);
            return;
        }
        
        if(idx == n)
            return;
      
        solve(arr, n, k, idx + 1, sum, v, st);
        if(sum < k)
        {
            v.push_back(arr[idx]);
            solve(arr, n, k, idx + 1, sum + arr[idx], v, st);
            v.pop_back();
        }
         
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        vector<int> temp;
        set<vector<int>> st;
        sort(arr.begin(),arr.end());
        solve(arr, n, k, 0, 0, temp, st);
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
        
    }
};




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
