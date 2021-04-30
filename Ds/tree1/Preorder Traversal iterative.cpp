vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
  
  //if(root==NULL)
  //return v;
  
  stack<Node*> s;
  
  s.push(root);
  
  while(!s.empty())
  {
      Node *c=s.top();
      s.pop();
      v.push_back(c->data);
      if(c->right)
      {
          s.push(c->right);
      } 
      if(c->left)
      {
          s.push(c->left);
      }
  } 
  return v;
}
