#include <iostream>
using namespace std;

int peakIndex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{

    int arr[7] = {1, 2, 3, 4, 9, 1, 0};

    cout << "The index of peak value is: " << peakIndex(arr, 7);
    return 0;
}