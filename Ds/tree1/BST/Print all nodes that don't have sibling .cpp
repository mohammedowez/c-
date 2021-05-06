void findNoSibling(Node* root, vector<int> &res)
{
    if(root)
    {
        findNoSibling(root->left,  res);
        
        if(root->left != NULL and root->right == NULL)
        {
            res.push_back(root->left->data);
        }
        
        if(root->left == NULL and root->right != NULL)
        {
            res.push_back(root->right->data);
        }
        
        findNoSibling(root->right, res);
    }
}

vector<int> noSibling(Node* root)
{
    vector<int> res;
    
    findNoSibling(root, res);
    
    if(res.size() == 0)
    {
        res.push_back(-1);
    }
    
    sort(res.begin(), res.end());
    
    return res;
}
