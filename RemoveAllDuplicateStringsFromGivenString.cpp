//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    string removeDuplicates(string str)
    {
        // code here
        string uniqueStr;
        int lowerHash[26] = {0}, upperHash[26] = {0};

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z' && lowerHash[str[i] - 'a'] == 0)
            {
                uniqueStr.push_back(str[i]);
                lowerHash[str[i] - 'a']++;
            }
            if (str[i] >= 'A' && str[i] <= 'Z' && upperHash[str[i] - 'A'] == 0)
            {
                uniqueStr.push_back(str[i]);
                upperHash[str[i] - 'A']++;
            }
        }
        return uniqueStr;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends