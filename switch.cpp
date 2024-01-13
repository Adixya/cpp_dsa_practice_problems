#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    char ch = 'a';

    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;

    case 2:
        switch (ch)
        {
        case 'a':
            cout << "The letter is " << ch << endl;
            break;

        default:
            cout << "It is default case" << endl;
        }
        break;

    default:
        cout << "It is default case" << endl;
    }
    return 0;
}