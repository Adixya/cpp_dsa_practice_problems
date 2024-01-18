#include <iostream>
using namespace std;
int index = 0;
int removeElement(int nums[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {4, 10, 7, 4, 8, 4};
    removeElement(arr, 6, 4);
    printArray(arr, 6);
    return 0;
}