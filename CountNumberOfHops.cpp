//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {

        // your code here
        // TIME COMPLEXITY ERROR (UPTO 10 TEST CASES)
        // if( n < 0)
        //     return 0;
        // if(n == 0)
        //     return 1;
        // int ans = countWays(n-1) + countWays(n-2) + countWays(n-3);
        // return ans;
        // ===========================================================
        int mod = 1000000007L;
        long long res = 0, prev1 = 0, prev2 = 0, prev3 = 1;
        for (int i = 1; i <= n; i++)
        {
            res = (prev1 + prev2 + prev3) % mod;
            prev1 = prev2;
            prev2 = prev3;
            prev3 = res;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    // taking testcases
    int t;
    cin >> t;

    while (t--)
    {
        // taking number of steps in stair
        int n;
        cin >> n;
        Solution ob;
        // calling function countWays()
        cout << ob.countWays(n) << endl;
    }

    return 0;
}

// } Driver Code Ends