Node* insert(Node* root, int key)
{
    // Your code here
    if(root==NULL)
    return new Node(key);
    
    else if(root->data < key)
    {
        root->right=insert(root->right,key);
    } 
    else if(root->data>key)
    {
        root->left=insert(root->left,key);
    }
    
    return root;
    
}
