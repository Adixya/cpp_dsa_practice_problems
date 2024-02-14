//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int splitArray(int arr[], int N, int K)
    {
        // code here
        int uprLimit{0}, lowLimit{0}, mid{0}, sum{0}, times{K};
        bool isPossible{true};
        for (int i{0}; i < N; i++)
        {
            uprLimit += arr[i]; // taking maximum sum...
            if (arr[i] > lowLimit)
                lowLimit = arr[i]; // taking biggest number...
        }

        while (lowLimit < uprLimit)
        {
            mid = (lowLimit + uprLimit) / 2; // get mid value..
            isPossible = true;
            sum = 0;
            times = K;
            for (int j{0}; j < N; j++)
            { // check if making subarrays is possible with mid value...
                sum += arr[j];
                if (sum > mid)
                {
                    sum = arr[j];
                    times--;
                }
                if (!times)
                    isPossible = false;
            }
            if (isPossible)
            { // if possible make upperlimit to mid...
                uprLimit = mid;
            }
            else
            {
                if (lowLimit == mid) // if lower limit is equal to mid already than upperlimit is our answer...
                    break;
                lowLimit = mid; // if not possible make lower limit to mid...
            }
        }
        return uprLimit;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;

        cin >> N >> K;
        int arr[N];

        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.splitArray(arr, N, K);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends