// insertion in linklist

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

void insertion_at_head(int data, Node *  &head)    // head insertion
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertion_at_tail(int data, Node *&tail)    //  tail inseertion
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertion_at_mid (int location, int data, Node* &head , Node* &tail)
{
    if(location==1)
    {
        insertion_at_head(data,head);  
        return ;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt<location-1) 
    {
      temp = temp->next;
      cnt ++;
    }

    if(temp->next == NULL)
    {
        insertion_at_tail(data,tail);
        return;
    }

    Node* NewNode = new Node(data);
    NewNode->next= temp->next;
    temp->next = NewNode;

}

void print(Node *&head)                 // aceesing the node remain same if you u are insert element at tail or head or mid
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

    // insertion_at_head(10, head);
    // insertion_at_head(15, head);
    // insertion_at_head(18, head);


    // insertion_at_tail(20, tail);
    // insertion_at_tail(25, tail);
    // insertion_at_tail(30, tail);

    // insertion_at_mid(5,28,head,tail);
    print(head);
       
    cout<<"head data is "<<head->data<<endl;
     cout<<"tail data is "<<tail->data<<endl;

    return 0;
}