//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    bool sameFreq(string s)
    {
        // code here
        vector<int> v(26, 0);
        vector<int> fr;
        unordered_set<int> st;

        // frequency for all characters
        for (auto &i : s)
            v[i - 'a']++;
        for (auto &j : v)
        {
            if (j != 0)
            {
                st.insert(j);
                fr.push_back(j);
            }
        }
        if (st.size() == 1)
            return 1;
        for (auto &i : fr)
        {
            i--;
            unordered_set<int> se;
            for (auto &j : fr)
            {
                if (j != 0)
                    se.insert(j);
            }
            if (se.size() == 1)
                return 1;
            i++;
        }
        return 0;
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
        cin >> s;
        Solution ob;
        cout << ob.sameFreq(s) << endl;
    }
}

// } Driver Code Ends