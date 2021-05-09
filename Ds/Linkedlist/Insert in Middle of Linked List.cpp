Node* insertInMiddle(Node* head, int x)
{
	// Cpde here

	Node *ins = new Node(x);
	Node *s=head;
	Node *f=head;
	
	if(head==NULL)
	    return ins;
	   
	while(f->next and f->next->next)
	{
	    s=s->next;
	    f=f->next->next;
	} 
	if(s->next!=NULL)
	{
	    ins->next=s->next;
	    s->next=ins;
	} 
	else 
	{
	    s->next=ins;
	    
	}
	return head;
	
}
