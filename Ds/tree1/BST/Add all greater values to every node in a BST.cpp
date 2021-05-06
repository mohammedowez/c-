
Input:
           50
         /    \
        30    70
      /   \   / \  
     20   40 60  80
Output: 350 330 300 260 210 150 80
Explanation:The tree should be modified to
following:
             260
          /       \
        330      150
       /   \   /     \
    350   300 210    80


class Solution 
{
public:
    
    void solve(TreeNode *root,int &s)
    {
        if(root==NULL)
            return ;
        
        solve(root->right,s);
        int od=root->val;
        root->val+=s;
        s=s+od;
        solve(root->left,s);
        
    }
    
    TreeNode* bstToGst(TreeNode* root) 
    {
    int s=0;
    solve(root,s);
    return root;
    }
};
