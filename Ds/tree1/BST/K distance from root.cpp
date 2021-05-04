vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  queue<Node*> q;
    	q.push(root);
    	int h=0;
    	vector<int> v;
    	while(!q.empty())
    	{
    	
    	    int n=q.size();
    	    if(h==k)
    	    {
    	        while(!q.empty() && n--)
    	        {
    	            v.push_back(q.front()->data);
    	            q.pop();
    	        } 
    	        break;
    	    }
    	    while(n--)
    	    {
    	    	Node *c=q.front();
    	    	q.pop();
    	    if(c->left)
    	        q.push(c->left);
    	    if(c->right)
    	        q.push(c->right);
            }
        h++;
        	
    	}
    	return v;
    	
}

//recursive

oid solve(struct Node *root,int k,vector<int> &v)
{ 
    if(root==NULL)
    return ;
    
    if(k==0)
    {
        v.push_back(root->data);
    } 
    else
    {
    solve(root->left,k-1,v);
    solve(root->right,k-1,v);
    }
}

vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  int c=0;
  vector<int> v;
  solve(root,k,v);
  return v;
}
