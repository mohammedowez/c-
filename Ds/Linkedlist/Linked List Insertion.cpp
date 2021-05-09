lass Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
   
    Node *insertAtBegining(Node *head, int newData) 
{
    Node *temp = new Node(newData);
    if(head ==NULL)
    {
        return temp;
    }
    temp->next = head;
    return temp;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  
{
    Node *temp = new Node(newData);
    if(head == NULL)
    {
       return temp;
    }
    else
    {
        Node *ptr = head;
        while(ptr->next!=NULL)
            ptr = ptr->next;
        ptr->next = temp;
        temp->next = NULL;
    }
   return head;
}
};
