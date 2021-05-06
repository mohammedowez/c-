/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     int t=0;
    int solve(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        
        int l=solve(root->left);
        int r=solve(root->right);
        
        int lt=abs(l-r);
            t=t+lt;
        
        int ts=l+r+root->val;
        return ts;
    }
    int findTilt(TreeNode* root) 
    {
        solve(root);
        return t;
    }
};
