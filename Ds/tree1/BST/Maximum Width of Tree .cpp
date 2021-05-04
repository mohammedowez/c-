class Solution
{
    public:
    //Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root)
    {
        queue<Node*> q;
        q.push(root);
        
        int ma=0;
        if(root==NULL)
            return 0;
        while(!q.empty())
        {
           
            int n=q.size();
            ma=max(ma,n);
            while(n--)
            {
                 Node *c=q.front();
                  q.pop(); 
            if(c->left)
            q.push(c->left);
            if(c->right)
            q.push(c->right);
            }
            
        }
        return ma;
       
    }
};
