class Solution
{
    public:
    //Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root)
    {
      // Your code here
      vector<int> v;
      if(root==NULL)
        return v;
      
      stack<Node*> s;
      Node *c=root;
      // auto c= root
      while(!s.empty() || c)
      {
          if(c)
          {
              s.push(c);
              c=c->left;
          } 
          else
          {
              c=s.top();
              s.pop();
              
              v.push_back(c->data);
              c=c->right;
          }
          
      } 
      return v;
     
    }
