#include <iostream>
using namespace std;

int main()
{

    // 1. Print matrix of "*"
    /*Example
    ****
    ****
    ****
    */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // cout << "Enter Column: ";
    // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= m)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*"
    //              << " ";
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
    // 2. Print the pattern
    /*Example
    1111
    2222
    3333
    */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // cout << "Enter Column: ";
    // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= m)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i << " ";
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
    // 3. Print the pattern
    /*Example
    1234
    1234
    1234
    */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // cout << "Enter Column: ";
    // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= m)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j << " ";
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
    // 4. Print the pattern
    /*Example
    321
    321
    321
    */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // cout << "Enter Column: ";
    // int n;
    // cin >> n;

    // int i = 1;

    // while (i <= m)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1 << " ";
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
    // 5 Print the pattern
    /*Example
    123
    456
    789
    */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // cout << "Enter Column: ";
    // int n;
    // cin >> n;
    // int count = 1;

    // int i = 1;

    // while (i <= m)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count << " ";
    //         count = count + 1;
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
    // 6. Print the half pyramid of "*"
    /*Example
     *
     **
     ***
     ****
     */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // // cout << "Enter Column: ";
    // // int n;
    // // cin >> n;

    // int i = 1;

    // while (i <= m)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*"
    //              << " ";
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
    // 7. Print the half no. pyramid
    /*Example
     1
     22
     333
     */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // // cout << "Enter Column: ";
    // // int n;
    // // cin >> n;

    // int i = 1;

    // while (i <= m)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i
    //              << " ";
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
    // 8. Print the half no. pyramid
    /*Example
     1
     23
     456
     78910
     */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // // cout << "Enter Column: ";
    // // int n;
    // // cin >> n;

    // int i = 1;
    // int count = 1;

    // while (i <= m)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count
    //              << " ";
    //         count = count + 1;
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
    // 9. Print the half no. pyramid
    /*Example
     1
     23
     345
     4567
     */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // // cout << "Enter Column: ";
    // // int n;
    // // cin >> n;

    // int i = 1;
    // // int count = 1;

    // while (i <= m)
    // {
    //     int j = 1;
    //     int k = i;
    //     while (j <= i)
    //     {
    //         cout << k
    //              << " ";
    //         // count = count + 1;
    //         k += 1;
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // -------------------------------------------------------
    // (ALTERNATE METHOD WITHOUT USING K)
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // // cout << "Enter Column: ";
    // // int n;
    // // cin >> n;

    // int i = 1;
    // // int count = 1;

    // while (i <= m)
    // {
    //     int j = 0;
    //     while (j < i)
    //     {
    //         cout << i + j
    //              << " ";
    //         // count = count + 1;
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
    // 10. Print the half no. pyramid
    /*Example
     1
     21
     321
     4321
     */
    // int m;
    // cout << "Enter Row: ";
    // cin >> m;
    // // cout << "Enter Column: ";
    // // int n;
    // // cin >> n;

    // int i = 0;
    // // int count = 1;

    // while (i <= m)
    // {
    //     int j = 0;
    //     while (j <= i)
    //     {
    //         cout << i - j + 1
    //              << " ";
    //         // count = count + 1;
    //         j += 1;
    //     }
    //     cout << "\n";
    //     i += 1;
    // }
    // ==============================================================
}