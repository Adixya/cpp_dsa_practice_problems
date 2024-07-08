#include <bits/stdc++.h>
using namespace std;

// Self defined data type
class Node
{
public:
    int data;
    Node *next;
    // constructor - special type of objects to initialize the class
public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *y = new Node(arr[0]);
    cout << y->data;
}