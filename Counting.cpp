#include <iostream>
using namespace std;

void printCounting(int num)
{

    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return;
}

int main()
{

    int n;
    cout << "Enter number :";
    cin >> n;
    printCounting(n);
    return 0;
}