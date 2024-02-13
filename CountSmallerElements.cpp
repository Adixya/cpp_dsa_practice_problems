//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    vector<int> constructLowerArray(int *arr, int n)
    {
        // code here
        // upto 200 test cases out of 212 test cases
        // vector<int> res(n);
        //     map<int, int> m;
        //     for (int i = n - 1; i >= 0; i--) {
        //       m[arr[i]]++;
        //       int count = 0;
        //       for(auto it = m.begin(); it != m.end(); it++) {
        //           if(it->first >= arr[i]) break;
        //           count += it->second;
        //       }
        //       res[i] = count;
        //      }
        //      return res;
        // ==================================================================
        // OPTIMAL SOLUTION
        vector<int> ans;
        if (n == 0)
            return ans;

        vector<int> sorted;

        sorted.push_back(arr[n - 1]);
        ans.push_back(0);

        for (int i = n - 2; i >= 0; i--)
        {
            auto it = lower_bound(sorted.begin(), sorted.end(), arr[i]);

            ans.push_back(it - sorted.begin());

            sorted.insert(it, arr[i]);
        }
        reverse(ans.begin(), ans.end());

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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends