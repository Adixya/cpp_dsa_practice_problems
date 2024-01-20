#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
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

    int arr[4] = {72, 85, 66, 9};
    int brr[8] = {1, 3, 105, 8, 44, 8, 89, 99};

    bubbleSort(arr, 4);
    printArray(arr, 4);
    bubbleSort(brr, 8);
    printArray(brr, 8);
    return 0;
}