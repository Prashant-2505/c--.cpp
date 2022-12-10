// remove duplicate in unsorted array

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
    Node *move1 = head;
    Node *move2;
    Node *dup;

    while (move1 != NULL && move1->next != NULL)
    {
        move2 = move1;
        while (move2->next != NULL)
        {

            if (move1->data == move2->next->data)
            {
                dup = move2->next;
                move2->next = move2->next->next;
                delete (dup);
            }

            else
                move2 = move2->next;
        }
        move1 = move1->next;
    }

    return head;
}

Node *removeDuplicate2(Node *head)
{
    Node *prev = NULL;
    Node *temp = head;

    unordered_map<int, int> M;
    while (temp != NULL)
    {
        M[temp->data]++;
        if (M[temp->data] > 1)
        {
            prev ->next= temp->next;
            temp = temp->next;
        }
        else
        {
            prev = temp;
            temp = temp->next;
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
    removeDuplicate2(head);
    print(head);

    return 0;
}