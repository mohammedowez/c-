void inorder(node *root,vector<int> &v)
{
    if(root==NULL)
        return ;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
int findMax(struct node* root)
{
// Your code goes here
vector<int> v;
inorder(root,v);
sort(v.begin(),v.end());
return v[v.size()-1];

}

// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
// Your code goes here
vector<int> p;

inorder(root,p);
sort(p.begin(),p.end());
return p[0];
p.clear();
}
