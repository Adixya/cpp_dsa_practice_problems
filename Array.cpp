#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Printing DONE " << endl;
}

int main()
{
    int num[15];
    cout << "Value at 14 index is: " << num[14] << endl;

    int second[3] = {5, 7, 11};

    cout << "Value at 2nd index is: " << second[2] << endl;

    int third[15] = {2, 7};
    printArray(third, 15);
    int thirdSize = sizeof(third) / sizeof(int);
    cout << "Size of array is: " << thirdSize << endl;

    int fourth[10] = {0};
    printArray(fourth, 10);

    int fourthSize = sizeof(fourth) / sizeof(int);
    cout << "Size of array is: " << fourthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 's'};
    for (int i = 0; i <= 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl
         << "Everything is fine " << endl;

    return 0;
}