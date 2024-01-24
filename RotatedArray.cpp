#include <iostream>

using namespace std;

void rotateArray(int arr[], int n)
{
    int last = arr[n - 1]; // Store the last element

    // Shift all elements one position to the right
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the first position
    arr[0] = last;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    rotateArray(arr, n);

    cout << "\nRotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
