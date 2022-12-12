// Height of binary tree

\
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

void buildFromLvlOrder(node *&root)
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
}

void levelOrderTransversal(node *root)
{
    int count = 0;
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            count++;
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
    cout<<endl;
     cout<<endl;
      cout<<endl;

      cout<<"height of tree is "<<count<<endl;

}

int main()
{

 node *root = NULL;
 buildFromLvlOrder(root);
levelOrderTransversal(root);
    return 0;
}