#include <iostream>
using namespace std;

int arraySum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter values" << endl;
        cin >> num[i];
    }
    cout << "The sum of all elements is: " << arraySum(num, size) << endl;
    return 0;
}