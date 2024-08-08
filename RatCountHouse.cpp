#include <bits/stdc++.h>
using namespace std;
int calculate(int r, int unit, int arr[], int n)
{
    if (n == 0)
        return -1;
    int m = r * unit;
    int sum = 0;
    int count = 0;
    for (count = 0; count < n; count++)
    {
        sum += arr[count];
        if (sum >= m)
        {
            break;
        }
    }
    if (m > sum)
        return 0;
    return count + 1;
}
int main()
{
    int r;
    cin >> r;
    int unit;
    cin >> unit;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << calculate(r, unit, arr, n);
    return 0;
}