#include <iostream>
using namespace std;

int PalinArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        int temp = a[i];
        while (temp > 0)
        {
            int k = temp % 10;
            num = num * 10 + k;
            temp = temp / 10;
        }
        if (num != a[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int arr[5] = {121, 131, 333, 454, 666};
    int brr[5] = {121, 131, 333, 454, 20};
    cout << PalinArray(arr, 5) << endl;
    cout << PalinArray(brr, 5) << endl;
}