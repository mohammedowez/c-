Input:
        2
      /   \
     1     3
sum = 5
Output: 1 
Explanation: 
Nodes with value 2 and 3 sum up to 5.

class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    void inorder(Node *root,vector<int> &v)
    {
        if(root==NULL)
            return ;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    bool solve(vector<int> v,int t)
    {
        for(int i=0,j=v.size()-1;i<j; )
        {
            int s=v[i]+v[j];
            if(s==t)
            {
                return 1;
            } 
            else if(s<t)
            {
                i++;
            } 
            else if(s>t)
            {
                j--;
            }
        } 
        return 0;
    }
    
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    vector<int> v;
    inorder(root,v);
    
    return solve(v,target);
    }
};
