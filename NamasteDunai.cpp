#include <iostream>
using namespace std;

int main()
{
    // cout << "Namaste Dunia";
    int a = 24;
    if (a > 20)
    {
        cout << "Aditya";
    }
    if (a == 24)
    {
        cout << "Singh";
    }
    else
    {
        cout << "Great";
    }
    cout << a;
    char ch;
    cout << "enter your data:";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "digits";
    }
    else
    {
        cout << "try again";
    }
    return 0;
}