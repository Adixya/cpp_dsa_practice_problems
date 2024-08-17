#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        long long int product = 1;
        int zeroCnt = 0;
        for(int i=0 ; i< nums.size() ; ++i){
            if(nums[i]!=0){
                product *= nums[i];
            }else{
                zeroCnt++;
            }
        }
        
        vector<long long int> ans;
        for(int i=0 ; i< nums.size() ; ++i){
            if(nums[i]!=0){
                if(zeroCnt>=1) ans.push_back(0);
                else ans.push_back(product/(long long int)nums[i]);
            }else{
                if(zeroCnt>1) ans.push_back(0);
                else ans.push_back(product);
            }
            
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
