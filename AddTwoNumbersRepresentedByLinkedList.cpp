//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *buildList(int size)
{
    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node *n)
{
    while (n)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
    // Function to add two numbers represented by linked list.

    struct Node *reverse(struct Node *head)
    {
        struct Node *current = head;
        struct Node *prev = NULL, *next = NULL;

        while (current != NULL)
        {
            // store next
            next = current->next;
            // reverse current node's pointer
            current->next = prev;
            // move pointers one position ahead
            prev = current;
            current = next;
        }
        return prev;
    }
    struct Node *addTwoLists(struct Node *num1, struct Node *num2)
    {
        // code here
        if (num1 == NULL)
            return num2;
        if (num2 == NULL)
            return num1;
        struct Node *ans = new Node(-1);
        struct Node *curr = ans;
        int carry = 0;

        num1 = reverse(num1);
        num2 = reverse(num2);

        while ((num1 != NULL || num2 != NULL) || carry)
        {
            int sum = carry;

            if (num1 != NULL)
            {
                sum += num1->data;
                num1 = num1->next;
            }
            if (num2 != NULL)
            {
                sum += num2->data;
                num2 = num2->next;
            }

            curr->next = new Node(sum % 10);
            curr = curr->next;

            carry = sum / 10;
        }
        ans = reverse(ans->next);
        while (ans->data == 0 && ans->next != NULL)
            ans = ans->next;

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        cin >> n;
        Node *num1 = buildList(n);

        cin >> m;
        Node *num2 = buildList(m);
        Solution ob;
        Node *res = ob.addTwoLists(num1, num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends