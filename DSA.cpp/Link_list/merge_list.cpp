// merge two sorted list

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

// using extra space
Node *merging1(Node *head1, Node *head2)
{
    Node *dummynode = new Node(-1);
    Node *p1 = head1;
    Node *p2 = head2;
    Node *p3 = dummynode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }

        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummynode->next;
}




// not using any extra space
Node *solution(Node *head1, Node *head2)
{
    Node *cur1 = head1;
    Node *cur2 = head2;
    Node *temp1 = NULL;
    Node *temp2 = NULL;

    while (cur1->next != NULL)
    {
        if (cur1->data <= cur2->data && cur1->next->data >= cur2->data)
        {
            temp1 = cur1->next;
            temp2 = cur2->next;
            cur2->next = cur1->next;
            cur1->next = cur2;

            cur1 = temp1;
            cur2 = temp2;
        }
        else
        {
            cur1 = cur1->next;
        }
    }
    if (cur2 != NULL)
    {
        cur1->next = cur2;
    }

    return head1;
}

Node *merging2(Node *head1, Node *head2)
{
    if (head1->data <= head2->data)
    {
        return solution(head1, head2);
    }
    else
    {
        return solution(head2, head1);
    }
    return NULL;
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
    Node *head1;
    head1 = NULL;

    Node *head2;
    head2 = NULL;

    insertion(head1, 8);
    insertion(head1, 4);
    insertion(head1, 2);

    insertion(head2, 10);
    insertion(head2, 6);
    insertion(head2, 5);
    insertion(head2, 3);

    print(head1);

    print(head2);

    // head1 = merging1(head1, head2);
    Node *head = merging1(head1, head2);
    print(head);
    return 0;
}
