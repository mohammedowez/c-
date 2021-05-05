vector<int> leftView(Node *root)
{
   // Your code here 
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
             if(c->right)
               q.push(c->right);
            if(c->left)
               q.push(c->left);
        
           }
       }
            return v;
}
      
