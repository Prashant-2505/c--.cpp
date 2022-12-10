// the mid location and mid node data of  link list

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

int get_length(Node *head)
{

    int cnt;
    while (head != NULL)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}

// tym complexity ===> O(N)
int middle(Node *&head)
{

    // if list is emepty
    if (head == NULL)
    {
        return -1;
    }

    int length = get_length(head);

    // if there is single node
    if (length == 1)
    {
        return head->data;
    }

    // if there is multiple node
    int mid = length / 2;
    Node *temp = head;
    int cnt = 0;
    while (cnt<mid)
    {
        temp = temp->next;
        cnt++;
       
    }
    return temp->data;
}

int middle2(Node *&head)
{

    // if list is emepty
    if (head == NULL)
    {
        return -1;
    }
    Node *slow = head, *fast = head->next;
    while (fast != NULL)
    {
        slow = slow->next; 
        if (fast->next == NULL)
            break;
        fast = fast->next->next;
    }
    return slow->data;
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

int main()
{
    Node *head = NULL;
    insertion(head, 10);
    insertion(head, 20);
    insertion(head, 30);
    insertion(head, 50);
    insertion(head, 60);

    print(head);
    cout << "mid node data is ===> " << middle(head);

    return 0;
}


 
  