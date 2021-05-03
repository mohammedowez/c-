class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here
    queue<Node*> q;
    q.push(node);
    
    int h=0;
    while(q.size()!=0)
    {
        Node *c=q.front();
        
        int s=q.size();
        while(s--)
        {
            if(c->left)
            {
               q.push(c->left);
            } 
            if(c->right)
            {
                q.push(c->right);
            }
            q.pop();
        } 
        
        h++;
    }
    return h;
        
    }
};
