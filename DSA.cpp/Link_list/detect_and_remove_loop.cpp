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

// makin loop
void makeLoop(Node *&head, int pos)
{
    Node *temp = head;
    Node *intersect;
    int count = 1;

    while (temp->next != NULL)
    {
        if (count == pos)
        {
            intersect = temp;
        }
        count++;
        temp = temp->next;
    }
    temp->next = intersect;
}

// detection loop
Node *detect1(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    map<Node *, bool> visited;
    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return temp;
        }
        visited[temp] = true;
    }
    return NULL;
}

Node *detect2(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        if (fast->next == NULL)
        {
            return NULL;
        }
        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

// print first node of loop
// int loopNode (Node* &head)

Node *loopNode(Node *&head)
{
    if(head==NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = detect2(head);

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // return slow->data;
    return slow;
}


// remove loop from link list
void removeloop(Node *&head)
{

    Node *slow = loopNode(head);
    if (slow == NULL)
    {
        return;
    }
    Node *temp = slow;
    while (temp->next != slow)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    insert(head, 6);
    insert(head, 5);
    insert(head, 4);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);
    makeLoop(head, 5);
  //  cout << "data of node whose loop start is " << loopNode(head)<<endl;
    removeloop(head);
    print(head);

    return 0;
}