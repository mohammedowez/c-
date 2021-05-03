Node* insert(Node* root, int key)
{
    // Your code here
    Node *temp=new Node (key);
    Node *c=root;
    Node *p=NULL;
    
    while(c!=NULL)
    {
    p=c;
    
    if(c->data < key)
    {
        c=(c->right);
    } 
    else if(c->data>key)
    {
        c=(c->left);
    }
    else
    return root;
    } 
    
    if(p==NULL)
    return temp;
    
    if(p->data <key)
    {
        p->right=temp;
    } 
    else if(p->data >key)
    {
        p->left=temp;
    } 
    else
    return root;
}
