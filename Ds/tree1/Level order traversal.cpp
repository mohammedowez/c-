class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> v;
      if(node==NULL)
            return v;
      queue<Node*> q;
      q.push(node);
      
      while(!q.empty())
      {
          Node *c=q.front();
          
          v.push_back(c->data);
          if(c->left !=NULL)
          {
              q.push(c->left);
          }
          
           if(c->right !=NULL)
          {
              q.push(c->right);
          }
          
          q.pop();
          
      }
    }
};
