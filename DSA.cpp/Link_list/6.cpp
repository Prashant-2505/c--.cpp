// circular link list

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

void inserNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deletion(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
    }
    else
    {

        Node *prev = tail;
        Node *cur = prev->next;
        while (cur->data != value)
        {
            prev = cur;
            cur = cur->next;
        }

        prev->next = cur->next;

        // if there is single node 
        if (tail == prev)
        {
            tail = NULL;
        }

       // if deletion node is first node
        if (tail == cur)
        {
            tail = prev;
        }
        
       
        cur->next = NULL;
        delete cur;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    // inserting in empty list
    inserNode(tail, 5, 3);
    print(tail);
    inserNode(tail, 3, 9);
    print(tail);
    inserNode(tail, 9, 12);
    print(tail);
    inserNode(tail, 12, 13);
    print(tail);
    inserNode(tail, 9, 11);
    print(tail);
    deletion(tail, 12);
    print(tail);
    deletion(tail, 3);
    print(tail);

    return 0;
}