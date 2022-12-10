
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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// aproach 1 ===> sc = o(N)    tc = o(N)
bool check(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        if (v[s] != v[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

string palindrome(Node *head)
{

    Node *temp = head;
    vector<int> v;

    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    if (check(v))
    {
        return "list is palindrome";
    }
    return "list is not plindrome";
}





// approach 2 ==> tc=>O(N)   sc=>O(1)


// find mid
Node *mid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

// revers list
Node *reverse(Node *head)
{
    Node *cur = head;
    Node *prev = NULL;
    Node *forw = NULL;

    while (cur != NULL)
    {
        forw = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forw;
    }
    return prev;
}

string palindrome2(Node *head)
{
    // find the mid of list
    Node *middle = mid(head);
    // reverse the list from after mid
    Node *temp = middle->next;
    middle->next = reverse(temp);
    // comapre both half

    Node *head1 = head;
    Node *head2 = middle->next;
    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return "not palindrome";
        }
       head1=head1->next;
       head2 = head2->next;
    }
    // make list same as before revering
    middle->next = reverse(temp);
    return "list is palindrome";
}

int main()
{
    Node *head;
    head = NULL;

    
    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 2);
    insertion(head, 1);
   
    print(head);
    cout << palindrome2(head);
    return 0;
}
