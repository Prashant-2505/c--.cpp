#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};



int main()
{
    Node *node1;             // it is a pointer because node has to be created inside the heap
    node1 = new Node(10);    // heap allaocton
    cout << node1->data << endl;
    cout << node1->next << endl;


    return 0;
}