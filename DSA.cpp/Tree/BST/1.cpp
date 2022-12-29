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
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node *minVal(Node *root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *deletefromBST(Node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // left child

        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right
        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // both child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deletefromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deletefromBST(root->left, val);
        return root;
    }

    else
    {
        root->right = deletefromBST(root->right, val);
        return root;
    }
}

int main()
{

    Node *root = NULL;
    cout << "ENter the data to create bst" << endl;
    TakeInput(root);
    cout << "printing the bst tree" << endl;
    levelOrderTraversal(root);

    root = deletefromBST(root, 30);
    cout << "after deleteion " << endl;
    levelOrderTraversal(root);

    return 0;
}