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
        next = NULL;
    }
};

void insert(Node *&head, int data)
{
    Node *node = new Node(data);
    if (head == NULL)
    {
        head = node;
    }
    else
    {
        node->next = head;
        head = node;
    }
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


// recursive method
Node*merge2(Node*left,Node*right)
{
     Node* res = NULL;
    if(left->data<= right->data)
    {
        res = left;
       res->next = merge2(left->next,right);

    }
    else
    {
        res = right;
        res->next = merge2(left,right->next);
    }
    return res;
}

// iterative method;
Node *merge(Node *left, Node *right)
{
    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }


    Node *dummy = new Node(-1);
    Node *node = dummy;

    while (left != NULL && right != NULL)
    {
        if (left->data <= right->data)
        {
            node->next = left;
            left = left->next;
        }
        else
        {
            node->next = right;
            right = right->next;
        }
        node = node->next;
    }
    while (left != NULL)
    {
        node->next = left;
        left = left->next;
        node = node->next;
    }
    while (right != NULL)
    {
        node->next = right;
        right = right->next;
        node = node->next;
    }
    Node *ans = dummy->next;
    return ans;
}

Node *middle(Node *head)
{

    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {

        fast = fast->next->next;
        slow = slow->next;
    }
    // cout<<count;
    return slow;
}

Node *mergesort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *mid = middle(head);
    Node *next_of_mid = mid->next;
    mid->next = NULL;
    Node *left = mergesort(head);
    Node *right = mergesort(next_of_mid);

    Node *result = merge(left, right);
    return result;
}
int main()
{

    Node *head;
    head = NULL;
    insert(head, 3);
    insert(head, 4);
    insert(head, 2);
    insert(head, 3);
    insert(head, 5);
    insert(head, 1);
    insert(head, 9);
    print(head);
    head = mergesort(head);
    print(head);
    return 0;
}