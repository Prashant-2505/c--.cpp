//   Diameter of the tree (GFG)



//approach 1   ===>   TC=O(N^2)   SC=O(1)=O(H)




class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        int ans = max(left,right)+1;
        return ans;
    }
    int diameter(Node* root) {
        // Your code hereif
        if(root==NULL)
        {
            return 0;
        }
        
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left)+height(root->right)+1;
        int ans = max(op1,max(op2,op3));
        return ans;
    }
};




//approach 2   ===>   TC=O(N)   SC=O(1)=O(H)

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
   pair<int,int> fast_D(Node*root)
   {
       if(root==NULL)
       {
           pair<int,int> p = make_pair(0,0);
           return p;
       }
       
       pair<int,int> left = fast_D(root->left);
       pair<int,int> right = fast_D(root->right);
       
       int op1 = left.first;
       int op2 = right.first;
       int op3 = left.second+right.second+1;
       
       pair<int,int> ans ;
       ans.first = max(op1,max(op2,op3));
       ans.second = max(left.second,right.second)+1;
       
       return ans;
   }
    int diameter(Node* root) {
        // Your code hereif
       return fast_D(root).first;
    }
};