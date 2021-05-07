Input:
    3
  /   \    
 1     2

Output: 1
Explanation: The given tree is a sum 
tree so return a boolean true.





class Solution
{
    public:
    bool isSumTree(Node* root)
    {
         // Your code here
    int s1=root->data;
    queue<Node*>  q;
    q.push(root);
    int s=0;
    while(!q.empty())
    {
        Node *c=q.front();
        q.pop();
        s=s+c->data;
        if(c->left)
           q.push(c->left);
        if(c->right)
            q.push(c->right);
    }
    if(s-s1==s1)
        return 1;
    return 0;

    }
};
