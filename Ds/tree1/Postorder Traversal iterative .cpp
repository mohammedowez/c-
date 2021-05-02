vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> v;
  if(root==NULL)
  return v;
  
  stack<Node*> s;
  stack<int> s1;
  //auto c=root;
  s.push(root);
  
  while(!s.empty())
  {
    Node *c=s.top();
    s.pop();
    
    s1.push(c->data);
    
    if(c->left)
    s.push(c->left);
    if(c->right)
    s.push(c->right);
  } 
  
  while(!s1.empty())
  {
      int x=s1.top();
      s1.pop();
      v.push_back(x);
  }
  return v;
}
