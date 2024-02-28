//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int DivisibleByEight(string s)
    {
        // code here
        int number = s.size();

        if (number <= 3)
        {

            int a = stoi(s);

            if (a % 8 == 0)
                return 1;

            else
                return -1;
        }

        string lastThree = s.substr(number - 3, 3);
        int value = stoi(lastThree);
        if (value % 8 == 0)
        {
            return 1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.DivisibleByEight(S) << "\n";
    }
}
// } Driver Code Ends