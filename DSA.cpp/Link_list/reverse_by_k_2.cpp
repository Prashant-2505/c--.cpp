/*
LEETCODE


5. Reverse Nodes in k-Group
Hard


Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k
 then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
Example 2:


Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
 

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 5000
0 <= Node.val <= 1000
 
*/



#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertion(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *node1 = new Node(data);
        head = node1;
    }

    else
    {
        Node *node2 = new Node(data);
        node2->next = head;
        head = node2;
    }
}

int get_length(Node *head)
{

    int cnt;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}

Node *reverse(Node *head, int k,int length)
{
    if(length<k)
    {
        return head;
    }

    Node *prev = NULL;
    Node *cur = head;
    Node *forw = NULL;
    int count = 0;

    while (cur != NULL && count < k)
    {
        forw = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forw;
        count++;
    }

    if (cur != NULL)
    {
        head->next = reverse(cur, k,length-k);
    }
    return prev;
}


Node *K_reverse(Node *head, int k)
{
    return reverse(head, k,get_length(head));

}


void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "   ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int k = 3;
    Node *head = NULL;
    insertion(head, 5);
    insertion(head, 4);
    insertion(head, 3);
    insertion(head, 2);
    insertion(head, 1);

    cout << "Before reversing      ===> ";
    print(head);

    head = K_reverse(head, k);
    cout << "after reversing  by " << k << " ===> ";
    print(head);

    return 0;
}
