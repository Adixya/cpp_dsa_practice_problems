#include <iostream>
using namespace std;

void moveZeroes(int nums[], int n)
{
    int start = 0, end = n, mid = 0;
    while (mid <= end)
    {
        if (nums[mid] != 0)
        {
            swap(nums[start], nums[mid]);
            start++;
        }
        mid++;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {0, 0, 7, 3, 0, 2};
    moveZeroes(arr, 6);
    printArray(arr, 6);
    return 0;
}
