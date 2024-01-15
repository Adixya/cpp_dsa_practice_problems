#include <iostream>
using namespace std;
int searchInsert(int arr[], int n, int m)
{
    int start = 0;
    int end = n - 1;

    int max = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == m)
        {
            return mid;
        }
        else if (arr[mid] > m)
        {
            max = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (max == -1)
    {
        max = n;
    }
    return max;
}
int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << searchInsert(arr, 15, 0) << endl;

    return 0;
}