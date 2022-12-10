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



Node *reverse(Node *head, int k)
{
   

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
        head->next = reverse(cur, k);
    }
    return prev;
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

    head = reverse(head, k);
    cout << "after reversing  by " << k << " ===> ";
    print(head);

    return 0;
}
