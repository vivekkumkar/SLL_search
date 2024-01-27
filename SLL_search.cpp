#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node()
		{
			next=NULL;
		}
		
		Node(int x)
		{
			data=x;
			next=NULL;
		}
};

class SLL
{
	Node *head;;
	public:
		SLL()
		{
			head=NULL;
		}
		
		void createList();
		void show();
		int search(int x);
		
};

int main()
{
	SLL obj1;
	cout<<"Enter List"<<endl;
	obj1.createList();
	cout<<"\nShowing List:-\n"<<endl;
	obj1.show();  
	                   
	int x;
	cout<<"\n\nEnter Number to search : ";
	cin>>x;
	if(obj1.search(x)==1)     //here call search function
	cout<<"\n **Found** ";
	else
	cout<<"\n **Not Found** ";
	
}


void SLL::createList()
{
	int n,x;
	cout<<"\n Enter number of nodes : ";
	cin>>n;
	if(n==0)
	{
		return;
	}
	cout<<"\n Enter data : ";
	cin>>x;
	
	head=new Node(x);
	Node *p;
	p=head;
	
	for(int i=1;i<=n-1;i++)
	{
		cout<<"\n Enter data : ";
		cin>>x;
		p->next=new Node(x);
		p=p->next;
	}
}

void SLL::show()
{
	if(head==NULL)
	{
		cout<<"\n List is Empty ";
		return;
	}
	Node *p;
	p=head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

int SLL::search(int x)
{
	if(head==NULL)
	{
		cout<<"\n List is Empty ";
		return 0;
	}
	Node *p;
	p=head;
	while(p!=NULL)
	{
		if(p->data==x)
		{
			return 1;
		}
		p=p->next;
	}
	
	return 0;
}

