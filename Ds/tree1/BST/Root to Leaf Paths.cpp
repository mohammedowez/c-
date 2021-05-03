void preOrder(Node *root, vector<vector<int>> &res, vector<int> &path)
{
    if(root)
    {
        if(root->left == NULL and root->right == NULL)
        {
            path.push_back(root->data);
            
            res.push_back(path);
            
            path.pop_back();
            
            return;
        }
    
        path.push_back(root->data);
        preOrder(root->left,  res, path);
        preOrder(root->right, res, path);
        path.pop_back();
    }
}
 
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>> res;
    vector<int> path;
    
    preOrder(root, res, path);
    
    return res;
}
