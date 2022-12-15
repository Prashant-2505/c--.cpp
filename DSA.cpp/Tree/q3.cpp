// is tree balanced 



// approach ==> 1  ===> TC=O(N^2)   SC=>O(1)+O(H)



class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height (Node*root)
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
    
    bool isBalanced(Node *root)
    {
        //  Your Code 
        if(root == NULL){ return true;}
        
        int left = isBalanced(root->left);
        int right = isBalanced(root->right);
        
        bool diff = abs(height(root->left) - height(root->right))<=1;
        
        if(left && right && diff)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};



// aproach2 ===>2   TC=O(N)   SC=>O(1)+O(H)

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool, int> isBalancedFast(Node* root) {
                // base case
        if(root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<int,int> left = isBalancedFast(root->left);
        pair<int,int> right = isBalancedFast(root->right);
        
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs (left.second - right.second ) <=1;
        
        pair<bool,int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff) {
           ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
    
};


// { Driver Code Starts.

/* Driver program to test size function*/

  