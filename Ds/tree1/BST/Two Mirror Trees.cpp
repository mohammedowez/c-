Input:
T1:     1     T2:     1
      /   \         /   \
     2     3       3     2
Output: 1
  
Input:
T1:     10      T2:   10
       /  \          /  \
      20  30        20  30
     /  \          /  \
    40   60       40  60
Output: 0


class Solution
{
    public:
   
    bool twoMirrorTrees(Node *a, Node *b)
{
    if(a != NULL and b != NULL)
    {
        bool check1 = twoMirrorTrees(a->left,  b->right);
        bool check2 = twoMirrorTrees(a->right, b->left);
        
        bool check3 = a->data == b->data;
        
        return check1 and check2 and check3;
    }
    else if(a == NULL and b == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int areMirror(Node *a, Node *b) 
{
    return twoMirrorTrees(a, b);
}
    
