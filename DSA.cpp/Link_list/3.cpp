// Deletion

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

    ~Node()
    {
        if (this->next != NULL) // if the node's next is null means there is no node after that node so if node's next is not equal to null
        {                       // so delete its pointer(next of particular node) ans make pointer null 
            delete next;
            next = NULL;
        }
       
        cout << "Memory is freed for node with data " << data << endl;
    }
};

void insertion_at_tail(int data, Node *&tail)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void deletion(int location, Node *&head,Node *&tail)
{

    if (location == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free
        temp->next = NULL ;
         delete temp;
    }

    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while (count < location)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        tail = prev->next;
        prev->next = curr->next;
        curr->next = NULL;
        tail = prev;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertion_at_tail(20, tail);
    insertion_at_tail(25, tail);
    insertion_at_tail(30, tail);

    print(head);

    cout << "After deletion" << endl;

    deletion(4, head,tail);
    print(head);
    cout<<"tails is "<<tail->data;
    
    return 0;
}