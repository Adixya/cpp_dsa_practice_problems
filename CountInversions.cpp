#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long mergeAndCount(long long arr[], int start, int mid, int end) {
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Create temporary arrays
    long long* left = new long long[len1];
    long long* right = new long long[len2];

    // Copy data to temporary arrays
    for (int i = 0; i < len1; i++)
        left[i] = arr[start + i];
    for (int i = 0; i < len2; i++)
        right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = start;
    long long invCount = 0;

    // Merge the two halves while counting inversions
    while (i < len1 && j < len2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
            invCount += (len1 - i); // All remaining elements in left[] are inversions
        }
    }

    // Copy the remaining elements of left[], if there are any
    while (i < len1) {
        arr[k++] = left[i++];
    }

    // Copy the remaining elements of right[], if there are any
    while (j < len2) {
        arr[k++] = right[j++];
    }

    // Deallocate memory
    delete[] left;
    delete[] right;

    return invCount;
}

long long mergeSortAndCount(long long arr[], int start, int end) {
    long long invCount = 0;
    if (start < end) {
        int mid = start + (end - start) / 2;

        // Count inversions in the left half
        invCount += mergeSortAndCount(arr, start, mid);

        // Count inversions in the right half
        invCount += mergeSortAndCount(arr, mid + 1, end);

        // Count inversions during merge
        invCount += mergeAndCount(arr, start, mid, end);
    }
    return invCount;
}

long long int inversionCount(long long arr[], int n) {
    return mergeSortAndCount(arr, 0, n - 1);
}
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}
