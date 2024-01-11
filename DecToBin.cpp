#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, r, m = 1, bin = 0;
    cout << "\nEnter the Number : ";
    cin >> n;
    while (n != 0)
    {
        r = n % 2;
        bin = bin + (r * m);
        m = m * 10;
        n = n / 2;
    }
    cout << "\nBinary Value : " << bin;
    return 0;
}