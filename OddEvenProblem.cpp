//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string oddEven(string s)
    {
        // code here
        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
            {
                ans = (((count[i] & 1) && ((i + 'a') - 'a' + 1) & 1) ||
                       ((count[i] % 2 == 0 && ((i + 'a') - 'a' + 1) % 2 == 0)))
                          ? ++ans
                          : ans;
            }
        }

        return (ans & 1) ? "ODD" : "EVEN";
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends