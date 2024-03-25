//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void helper(string s, int n, int c, vector<string> &ans)
    {
        if (s.size() == n)
        {

            ans.push_back(s);
            return;
        }
        helper(s + "1", n, c + 1, ans);
        if (c > 0)
            helper(s + "0", n, c - 1, ans);
    }

    vector<string> NBitBinary(int n)
    {
        // Your code goes here
        vector<string> ans;
        string s = "1";
        int c = 1;
        helper(s, n, c, ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        vector<string> ans = ob.NBitBinary(n);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends