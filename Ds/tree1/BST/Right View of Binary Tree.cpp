class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> v;
       if(root==NULL)
       return v;
       
       queue<Node*> q;
       q.push(root);
       
       int n;
       while(!q.empty())
       {
        n=q.size();
           while(n>0)
           {
               Node *c=q.front();
               q.pop();
               if(n==1)
                    v.push_back(c->data);
           n--;
            if(c->left)
               q.push(c->left);
           if(c->right)
               q.push(c->right);
           }
       }
            return v;
       }
      
};
