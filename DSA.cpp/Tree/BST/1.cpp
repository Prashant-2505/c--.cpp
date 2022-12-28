#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertData(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data <= root->data)
    {
        root->left = insertData(root->left, data);
    }
    else
    {
        root->right = insertData(root->right, data);
    }
    return root;
}

void TakeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertData(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

int main()
{

    Node *root = NULL;
    cout << "ENter the data to create bst" << endl;
    TakeInput(root);
    cout<<"printing the bst tree"<<endl;
    levelOrderTraversal(root);
    return 0;
}