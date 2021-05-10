int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *temp=head;
       int l=0;
       while(temp)
       {
           l++;
           temp=temp->next;
       } 
       if(n>l)
        return -1;
       temp=head;
       
       for(int i=0;i<l-n;i++)
       {
           temp=temp->next;
          
       }
       
       return temp->data;
}
