// add two number

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




Node*addtwonumber(Node* list1, Node*list2)
{
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    int carry = 0;
    while(list1!=NULL || list1!=NULL)
    {
        int sum =0;
        if(list1!=NULL)
        {
            sum += list1->data;
            list1= list1->next;
        }
        if(list2!=NULL)
        {
            sum += list2->data;
            list2= list2->next;
        }

        sum += carry;
        carry = sum/10;
         Node*node = new Node(sum%10);
         temp ->next = node;
         temp = temp->next;
    }

    return dummy->next;
}


int main()
{
    Node *head1;
    head1 = NULL;

    Node *head2;
    head2 = NULL;

    insertion(head1, 4);
    insertion(head1, 2);
    insertion(head1, 1);

    insertion(head2, 4);
    insertion(head2, 13);
    insertion(head2, 1);

print (head1);
print(head2);
cout<<"after addition"<<endl;
   Node* head = addtwonumber(head1,head2);
   print(head);

   
   
    return 0;
}
