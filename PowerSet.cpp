//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void solve(vector<string> &ans, string str, string output, int i)
    {
        // base case
        if (i >= str.length())
        {
            if (output.length() > 0)
                ans.push_back(output);
            return;
        }

        // exclude
        solve(ans, str, output, i + 1);
        // include
        output.push_back(str[i]);
        solve(ans, str, output, i + 1);
    }
    vector<string> AllPossibleStrings(string str)
    {
        // Code here
        vector<string> ans;
        string output = "";
        solve(ans, str, output, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        Solution ob;
        vector<string> res = ob.AllPossibleStrings(s);
        for (auto i : res)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends