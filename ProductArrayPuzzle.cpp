//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
    {

        // code here
        int count = 0;
        long long product = 1;
        long long product1 = 1;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                count++;
            }
        }

        for (int i = 0; i < n; i++)
        {

            if (count >= 2 || count == 0)
            {
                product = product * nums[i];
            }
            else
            {
                if (nums[i] != 0)
                {
                    product1 = product1 * nums[i];
                }
                else
                {
                    continue;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (count == 0)
            {
                nums[i] = product / nums[i];
            }
            else if (count >= 2)
            {
                nums[i] = 0;
            }
            else
            {
                if (nums[i] != 0)
                {
                    nums[i] = 0;
                }
                else
                {
                    nums[i] = product1;
                }
            }
        }
        return nums;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr, n); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends