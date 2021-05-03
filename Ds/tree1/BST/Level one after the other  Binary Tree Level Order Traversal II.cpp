
Input: root = [3,9,20,null,null,15,7]
Output: [[15,7],[9,20],[3]]

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> ans;
        if(root==NULL) 
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> arr;
            while(n--)
            {
                TreeNode* t=q.front();
                arr.push_back(t->val);
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
                q.pop();
            }
            
            ans.push_back(arr);
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
