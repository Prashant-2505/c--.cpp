// remove duplicate in sorted list

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

Node *insert(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *nodes = new Node(data);
        nodes->next = head;
        head = nodes;
    }
    return head;
}

Node *removeDuplicate(Node *&head)
{
    Node *cur = head;
    while (cur->next != NULL)
    {
        if (cur->data == cur->next->data)
        {
            Node *next_next = cur->next->next;
            Node *to_delete = cur->next;
            delete (to_delete);
            cur->next = next_next;
        }
        else
        {
            cur = cur->next;
        }
    }
    return head;
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

int main()
{
    Node *head = NULL;
    insert(head, 2);
    insert(head, 2);
    insert(head, 2);
    insert(head, 2);
    insert(head, 2);
    insert(head, 2);

    print(head);
    removeDuplicate(head);
    print(head);

    return 0;
}