
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}

vector<int> displayList(Node *head)
{
    
    vector<int> v;
    Node *c=head;
    while(c)
    {
        v.push_back(c->data);
        c=c->next;
    }
    //v.push_back(head->data);
    return v;
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail=NULL;
        int x;
	    cin>>x;
	    head = newNode(x);
	    tail = head;
	    
	    for(int i=0;i<n - 1;i++)
	    {
	        cin>>x;
	        Node* temp=newNode(x);
	        tail->next=temp;
	        temp->prev= tail;
	        tail = temp;
	    }
	    
	    vector<int> list = displayList(head);
	    
	    for(int x : list){
	        cout<<x<<" ";
	    }
	    cout<<endl;
        
        for(int i = list.size()-1;i>=0;i--)
            cout<<list[i]<<" ";
            
	    cout<<endl;
	}
	return 0;
}  
