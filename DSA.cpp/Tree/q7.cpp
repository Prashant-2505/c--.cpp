//left view of binary tree

void solution(Node* root, vector<int>&ans,int lvl)
{
    if(root == NULL) {return;}
    if(lvl == ans.size())
    {
        ans.push_back(root->data);
    }
    solution(root->left,ans,lvl+1);
    solution(root->right,ans,lvl+1);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if(root==NULL){return ans;}
   solution(root,ans,0);
   return ans;
}