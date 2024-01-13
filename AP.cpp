#include <iostream>
using namespace std;

int Nth_term(int a, int b, int n)
{
    return (a + (n - 1) * b);
}

int main()
{

    int a;
    cout << "Enter initial value: " << endl;
    cin >> a;
    int b;
    cout << "Enter common difference: " << endl;
    cin >> b;
    int n;
    cout << "Enter n value: " << endl;
    cin >> n;

    cout << "The " << n << "th term is: " << Nth_term(a, b, n) << endl;

    return 0;
}