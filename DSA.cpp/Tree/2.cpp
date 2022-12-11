// type of order traveral
// 1 in-order traveral
// 2 pre-order traveral
// 3 post-order traveral

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << " Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << " Enter the data in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << " Enter the data in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}


void levelOrderTransversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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




void in_order_traversal(node *root)     // LNR
{
    if (root == NULL)
    {
        return;
    }

    in_order_traversal(root->left);
    cout << root->data << " ";
    in_order_traversal(root->right);
}

void pre_order_traversal(node *root)    // NLR
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    pre_order_traversal(root->left);
    pre_order_traversal(root->right);
}

void post_order_traversal(node *root)  //LRN
{
    if (root == NULL)
    {
        return;
    }

    post_order_traversal(root->left);
    post_order_traversal(root->right);
    cout << root->data << " ";
}

int main()
{

    node *root = NULL;
    root = buildTree(root);

  cout<<"Print the level order traversal"<<endl;
    levelOrderTransversal(root);

    cout << "Print the inorder traversal" << endl;
    in_order_traversal(root);
    cout << endl;

    cout << "Print the  preorder traversal" << endl;
    pre_order_traversal(root);
    cout << endl;

    cout << "Print the postorder traversal" << endl;
    post_order_traversal(root);
    return 0;
}