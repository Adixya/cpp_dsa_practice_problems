//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minValue(string s, int k)
    {
        // code here
        unordered_map<char, int> mp;

        for (auto i : s)
        {
            mp[i]++;
        }
        vector<int> v;

        for (auto i : mp)
        {
            v.push_back(i.second);
        }

        while (k > 0)
        {
            sort(v.begin(), v.end(), greater<int>());
            v[0]--;
            k--;
        }
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans = ans + v[i] * v[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;

        Solution ob;
        cout << ob.minValue(s, k) << "\n";
    }
    return 0;
}
// } Driver Code Ends