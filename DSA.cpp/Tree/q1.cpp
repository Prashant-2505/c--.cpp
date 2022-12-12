// cont leaf of tree


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

node* buildFromLvlOrder(node *root)
{
    queue<node *> q;
    int data;
    cout<<"ENter the data of root : "<<endl;
    cin >> data;
    root = new node(data);
    q.push(root);
   

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter the data in left of : " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "Enter the data in right of : " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
    return root;
}

void levelOrderTransversal(node *root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
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







// counting leaf
void countLeaf(node* root,int &count)
{
    if(root==NULL)
    {
        return ;
    }
    countLeaf(root->left,count);
    if(root->left == NULL &&  root->right == NULL)
    {
        count ++;
    }
     countLeaf(root->right,count);
}

int main()
{

 node *root = NULL;
root = buildFromLvlOrder(root);
levelOrderTransversal(root);

int count = 0;
countLeaf(root,count);
cout<<"no of leaf present in tree is "<<count;
    return 0;
}