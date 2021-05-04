int solve(Node *root,int &h)
    {
        if(root==NULL)
            return 0;
        
        int l=solve(root->left,h);
        int r=solve(root->right,h);
        h=max(h,l+r+1);
        return max(l,r)+1;
            
        
    }
    int diameter(Node* root)
    {
    // Your code here
    if(root==NULL)
        return 0;
        int h=1;
        solve(root,h);
        return h;
    }

};
