#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {5, -7, 10, -2, 2, 4, 9, 12, 22, -8};

    cout << "Enter the element to search for: ";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is Present";
    }
    else
    {
        cout << "Key is Absent";
    }
}