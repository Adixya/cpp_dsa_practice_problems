#include <iostream>
using namespace std;
// 231. Power Of Two (LEETCODE QUESTION)
int main()
{
    int n;
    cin >> n;

    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }
        if (ans < INT_MAX / 2)
            ans = ans * 2;
    }
    return false;
}