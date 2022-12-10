// reversing link list

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

Node *reverse1(Node *&head)
{
    Node *prev = NULL;
    Node *cur = head;
    Node *forw = NULL;
    while (cur != NULL)
    {
        forw = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forw;
    }
    return prev;
}


// recursive method
void recursion(Node *&head, Node *prev, Node *cur)
{
    // base case
    if (cur == NULL)
    {
        head = prev;
        return;
    }

    Node *forw = cur->next;
    recursion(head, cur, forw);
    cur->next = prev;
}
Node *reverse2(Node *&head)
{
    Node *cur = head;
    Node* prev = NULL;
    recursion(head,prev,cur);
    return head;

}



void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertion(head, 10);
    insertion(head, 20);
    insertion(head, 30);
    insertion(head, 50);
    insertion(head, 60);
    insertion(head, 70);
    cout << "before reversing  ====> ";
    print(head);
    head = reverse2(head);
    cout << "after reversing  ====> ";
    print(head);
    return 0;
}