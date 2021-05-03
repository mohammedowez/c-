void findpath(Node *root,vector<int> v,vector<vector<int>> &res)
{
    if(root==NULL)
        return ;
    v.push_back(root->data);
    if(root->left==NULL&&root->right==NULL)
    {
        res.push_back(v);
        return;
    }
    findpath(root->left,v,res);
    findpath(root->right,v,res);
}
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>> res;
    vector<int> v;
    findpath(root,v,res);
    return res;
}
