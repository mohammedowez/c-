void insertAtPosition(Node *head, int pos, int data)
{
    //Your code here
    Node *nd=new Node(data);
    int l=0;
    Node *temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
        if(temp==NULL)
            return;
    }
    nd->next=temp->next;
    temp->next=nd; 
}
