// when you dont have any node already 


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
};

void insert_at_head(Node *&head,Node *&tail, int data)
{

    if (head == NULL)
    {
        Node *new_node = new Node(data);
        head = new_node;
        tail = new_node;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp->next;
        head = temp;
    }
}

void insert_at_tail(Node* &head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *new_node = new Node(data);
        tail= new_node;
        head = new_node;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insert_at_mid(Node *&head, Node *&tail, int location, int data)
{
    Node *New_node = new Node(data);
    Node *current = head;
    if (location == 1)
    {
        insert_at_head(head,tail, data);
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
        insert_at_tail(head,tail, data);
        return;
    }

    New_node->next = current->next;
    current->next->prev = New_node->next;
    New_node->prev = current;
    current->next = New_node;
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
    Node *head = NULL;
    Node *tail = NULL;

    insert_at_head(head,tail, 20);
    insert_at_tail(head,tail, 30);
    insert_at_mid(head, tail, 3, 40);
    print(head);
    cout << "size of link-list is  " << size(head) << endl;
    cout << "The value at tail is " << tail->data << endl;
    return 0;
}