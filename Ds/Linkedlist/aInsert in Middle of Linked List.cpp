Node* insertInMiddle(Node* head, int x)
{
	// Cpde here

int len = 0;
    struct Node *node = new Node(x);
    struct Node *temp = head;
    while(temp!=NULL)
    {
        len++;
        temp = temp->next;
    }
    temp = head;
    for(int i=0;i<(len/2 + len%2 - 1) ;i++)
    {
        temp = temp->next;
    }
    node->next = temp->next;
    temp->next = node;
    return head;
	
}
