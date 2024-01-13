#include <iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter amount: " << endl;
    cin >> amount;

    int num = 1;
    int note = 0;

    switch (num)
    {
    case 1:
        note = amount / 100;
        amount = amount - note * 100;
        cout << "Rs. 100 notes requires :" << note << endl;
    case 2:
        note = amount / 50;
        amount = amount - note * 50;
        cout << "Rs. 50 notes requires :" << note << endl;
    case 3:
        note = amount / 20;
        amount = amount - note * 20;
        cout << "Rs. 20 notes requires :" << note << endl;
    case 4:
        note = amount / 10;
        amount = amount - note * 10;
        cout << "Rs. 10 notes requires :" << note << endl;
    case 5:
        note = amount / 1;
        amount = amount - note * 1;
        cout << "Rs. 1 notes requires :" << note << endl;
    }
}