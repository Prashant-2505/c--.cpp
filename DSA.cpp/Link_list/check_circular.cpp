// circular link list
// check loop   141 leetcode
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
       
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

      
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}



string circular(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        return "list is empty";
    }

    while (temp != NULL && temp != tail)
    {
        temp = temp->next;
    }
    if (temp == tail)
    {
       
        return " link list is circular";
    }
    return "link list is not circular";
}


string checkLOOP(Node* &tail)
{
    map<Node* , bool> visited;
    Node* temp = tail;
    while(temp != NULL)
    {   
        if(visited[temp]==true)
        {
             cout<<"at data "<<temp->data;
            return " there is loop ";
        }
         visited[temp]=true; 
         temp = temp->next;
    }
    return " there is no loop";
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
    inserNode(tail, 3, 9);
    inserNode(tail, 9, 12);
    inserNode(tail, 12, 13);
    inserNode(tail, 9, 11);

    print(tail);
    cout << checkLOOP(tail);

    return 0;
}