Node *insertInTail(Node * head, int data)
{
    //Your code her
    Node *temp=new Node(data);
    Node *c=head;
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    
    while(c->next!=head)
    {
        c=c->next;
    }
        
    c->next=temp;
    temp->next=head;
    return head;
}
