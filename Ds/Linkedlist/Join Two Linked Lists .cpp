Node * joinTheLists(Node * head1, Node * head2)
{
    //Your code here
    Node  *temp=head1;
    while(temp->next)
    {
        temp=temp->next;
    } 
    temp->next=head2;
    return head1;
}
