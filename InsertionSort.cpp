#include <iostream>
using namespace std;

void insertionSort(int n, int arr[])
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
        }
        // copy temp value
        arr[j + 1] = temp;
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
    int arr[6] = {1, 4, 7, 3, 8, 2};
    insertionSort(6, arr);
    printArray(arr, 6);
    return 0;
}