//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x)
    {
        // code here
        int idx = 0;
        bool flag = false;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                flag = true;
                idx = i;
                break;
            }
        }
        if (flag)
        {
            int i = idx - 1;
            int j = idx + 1;
            while (k > 0 && i >= 0 && j < n)
            {
                if (abs(arr[i] - x) < abs(arr[j] - x))
                {
                    v.push_back(arr[i]);
                    i--;
                    k--;
                }
                else
                {
                    v.push_back(arr[j]);
                    j++;
                    k--;
                }
            }
            while (i >= 0 && k > 0)
            {
                v.push_back(arr[i]);
                i--;
                k--;
            }
            while (j < n && k > 0)
            {
                v.push_back(arr[j]);
                j++;
                k--;
            }
        }
        else
        {
            if (x < arr[0])
            {
                int i = 0;
                while (k > 0)
                {
                    v.push_back(arr[i]);
                    i++;
                    k--;
                }
            }
            else if (x > arr[n - 1])
            {
                int i = n - 1;
                while (k > 0)
                {
                    v.push_back(arr[i]);
                    i--;
                    k--;
                }
            }
            else
            {
                int s = 0;
                int e = 0;
                for (int i = 0; i < n - 1; i++)
                {
                    if (arr[i] < x && arr[i + 1] > x)
                    {
                        s = i;
                        e = i + 1;
                        break;
                    }
                }
                while (k > 0 && s >= 0 && e < n)
                {
                    if (abs(arr[s] - x) < abs(arr[e] - x))
                    {
                        v.push_back(arr[s]);
                        s--;
                        k--;
                    }
                    else
                    {
                        v.push_back(arr[e]);
                        e++;
                        k--;
                    }
                }
                while (k > 0 && s >= 0)
                {
                    v.push_back(arr[s]);
                    s--;
                    k--;
                }
                while (k > 0 && e < n)
                {
                    v.push_back(arr[e]);
                    e++;
                    k--;
                }
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans)
        {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends