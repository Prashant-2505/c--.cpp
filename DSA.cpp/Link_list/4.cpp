// Doubly link-list

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            next = NULL;
            delete next;
            prev = NULL;
            delete prev;
        }
         cout << "The node of data " << this->data << " is deleted " << endl;
    }
};

void insert_at_head(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp->next;
    head = temp;
}

void insert_at_tail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insert_at_mid(Node *&head, Node *&tail, int location, int data)
{
    Node *New_node = new Node(data);
    Node *current = head;
    if (location == 1)
    {
        insert_at_head(head, data);
        return;
    }
    int count = 1;
    while (count < location - 1)
    {
        current = current->next;
        count++;
    }

    if (current->next == NULL)
    {
        insert_at_tail(tail, data);
        return;
    }

    New_node->next = current->next;
    current->next->prev = New_node->next;
    New_node->prev = current;
    current->next = New_node;
}

void deletetion(Node *&head,Node *&tail, int Location)
{
    if (Location == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
         head = temp->next;
         temp->next = NULL;
        delete temp; 
    }
    else
    {
        Node *cur = head;
        Node *pre = NULL;
        int count = 1;
        while (count < Location)
        {
            pre = cur;
            cur = cur->next;
            count++;
        }

        cur->prev = NULL;
        pre->next = cur->next;
        tail = pre;
        cur->next = NULL;
       
        delete cur;
    }
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

int size(Node *&head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

int main()
{

    Node *node1;
    node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    // insert_at_head(head,20);
    insert_at_tail(tail, 30);
    insert_at_tail(tail, 40);
    insert_at_tail(tail, 50);
    insert_at_tail(tail, 60);
    // insert_at_mid(head, tail, 2, 20);
    print(head);

    deletetion(head,tail, 5);
    print(head);
    deletetion(head,tail, 1);
    print(head);
    cout << "size of link-list is  " << size(head) << endl;
    cout<<"tail is "<<tail->data;
   
    return 0;
}