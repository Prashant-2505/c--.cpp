// sorting  0 1  2

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

Node *insertion(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    return head;
}

// changing tha data of node only
void sort1(Node *head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
        }
        if (temp->data == 1)
        {
            oneCount++;
        }
        if (temp->data == 2)
        {
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
}

// changing the node
void insert(Node *&tail, Node *cur)
{
    tail->next = cur;
    tail = cur;
}

Node *sort2(Node *&head)
{
    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;

    Node *onehead = new Node(-1);
    Node *onetail = onehead;

    Node *twohead = new Node(-1);
    Node *twotail = twohead;

    Node *cur = head;

    while (cur != NULL)
    {
        if (cur->data == 0)
        {
            insert(zerotail, cur);
        }
        else if (cur->data == 1)
        {
            insert(onetail, cur);
        }
        else
        {
            insert(twotail, cur);
        }
        cur = cur->next;
    }

    // merging

    if (onehead->next != NULL)
    {
        zerotail->next = onehead->next;
    }
    else
    {
        zerotail->next = twohead->next;
    }

    onetail->next = twohead->next;
    twotail->next = NULL;

    head = zerohead->next;
    delete (zerohead);
    delete (onehead);
    delete (twohead);
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
    Node *head;
    head = NULL;


    insertion(head, 2);
    insertion(head, 1);
    insertion(head, 0);
    insertion(head, 1);
    insertion(head, 0);
    insertion(head, 0);
    insertion(head, 2);


    print(head);
    sort2(head);
    print(head);
    return 0;
}