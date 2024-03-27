//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int findShortestPath(vector<vector<int>> &mat)
    {
        // code here
        int ans = 0, m = mat.size(), n = mat[0].size(), dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
        vector<pair<int, int>> vp;
        queue<pair<int, int>> q;

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (mat[i][j] == 0)
                    vp.push_back({i, j});

        for (auto &x : vp)
        {
            for (int k = 0; k < 4; k++)
            {
                int a = x.first + dx[k], b = x.second + dy[k];
                if (a >= 0 and b >= 0 and a < m and b < n)
                    mat[a][b] = 0;
            }
        }

        for (int i = 0; i < m; i++)
            if (mat[i][0])
                q.push({i, 0}), mat[i][0] = 0;

        while (!q.empty())
        {
            int sz = q.size();
            ans++;
            while (sz--)
            {
                pair<int, int> p = q.front();
                q.pop();
                if (p.second == n - 1)
                    return ans;
                for (int i = 0; i < 4; i++)
                {
                    int a = p.first + dx[i], b = p.second + dy[i];
                    if (a >= 0 and b >= 0 and a < m and b < n and mat[a][b])
                        mat[a][b] = 0, q.push({a, b});
                }
            }
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
        int R, C;
        cin >> R >> C;
        vector<vector<int>> mat(R, vector<int>(C));
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> mat[i][j];
            }
        }

        Solution ob;
        int ans = ob.findShortestPath(mat);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends