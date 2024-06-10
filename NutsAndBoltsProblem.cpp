//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void matchPairs(int n, char nuts[], char bolts[])
    {
        // code here
        sort(nuts, nuts + n);
        sort(bolts, bolts + n);
        // unordered_map<char,char>charToNum = {{'!',"0"},{'#',"1"},{'$',"2"},{'%',"3"},
        // {'&',"4"},{'*',"5"},{'?',"6"},{'@',"7"},{'^',"8"}};

        // unordered_map<char,char>numToChar = {{'0',"!"},{'1',"#"},{'2',"$"},{'3',"%"},
        // {'4',"&"},{'5',"*"},{'6',"?"},{'7',"@"},{'8',"^"}};

        // for(int i = 0; i < n; i++){
        //     nuts[i] = charToNum[nuts[i]];
        //     bolts[i] = charToNum[bolts[i]];
        // }

        // std::sort(nuts,nuts+n);
        // std::sort(bolts1,bolts+n);

        // for(int i = 0; i < n; i++){
        //     nuts[i] = numToChar[nuts[i]];
        //     bolts[i] = numToChar[bolts[bolts[i]];
        // }
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
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++)
        {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++)
        {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends