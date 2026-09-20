#include<iostream.h>
#include<conio.h>
#include<process.h>
#define Null 0
class Node
{
	private:
		int data;
		Node * next;
		Node * head;
	public:
		void creation();
		void traverse();
		void insertion_beg();
		void insertion_mid();
		void insertion_end();
		void deletion_beg();
		void deletion_mid();
		void deletion_end();
		void search();
};
		void Node::creation()
		{
			int num;
			Node * temp;
			cout<<endl<<"enter no";
			cin>>num;
			while(num!=0)
			{
			if(head==Null)
			{
			head=new Node;
			head->data=num;
			head->next=Null;
			temp=head;

			}
			else
			{
			temp->next=new Node;
			temp=temp->next;
			temp->data=num;
			temp->next=Null;
			}
			cin>>num;
			}
		}
		void Node::traverse()
		{
			Node *p;
			if(head==Null)
			{
			cout<<endl<<"underflow condition";
			}
			else
			{
			p=head;
			while(p!=Null)
			{
			cout<<endl<<"------>"<<p->data;
			p=p->next;
			}
			}

		}
		void Node::insertion_beg()
		{
			int num;
			Node *temp;
			if(head==Null)
			{
			cout<<endl<<"underflow";
			}
			else
			{
			cout<<endl<<"enter no";
			cin>>num;
			temp=new Node;
			temp->data=num;
			temp->next=head;
			head=temp;
			cout<<endl<<"successfully inserted";
			}

		}
		void  Node::insertion_mid()
		{
			int num,num2;
			Node *temp,*p;
			if(head==Null)
			{
			cout<<endl<<"underflow condition";
			}
			else
			{
			cout<<"enter no";
			cin>>num;
			cout<<"enter no after that u want to store new no ";
			cin>>num2;
			temp=new Node;
			temp->data=num;
			p=head;
			while(p!=Null)
			{
			if(p->data==num2)
			{
			break;
			}
			p=p->next;
			}
			temp->next=p->next;
			p->next=temp;
			cout<<endl<<"successfully  inserted";
		       }

		}
		void Node::insertion_end()
		{
			int num;
			Node *temp,*p;
			if(head==Null)
			{
			cout<<endl<<"underflow condition";
			}
			else
			{
			cout<<"enter no ";
			cin>>num;
			temp=new Node;
			temp->data=num;
			temp->next=Null;
			p=head;
			while(p->next!=Null)
			{
			  p=p->next;
			}
			p->next=temp;
			cout<<endl<<"successfully inserted";
			}
		}
		void Node::deletion_beg()
		{
			Node *temp;
			if(head==Null)
			{
			cout<<endl<<"underflow condition";
			}
			else
			{
			temp=head;
			head=head->next;
			cout<<endl<<"deleted item is :"<<temp->data;
			delete temp;
			}

		}
		void  Node::deletion_mid()
		{
			Node *p,*temp;
			int num;
			if(head==Null)
			{
			cout<<endl<<"underflow condition";
			}
			else
			{
			cout<<endl<<"enter a no to delete";
			cin>>num;
			temp=head;
			p=head;
			while(temp->data!=num)
			{
			p=temp;
			temp=temp->next;
			}
			p->next=temp->next;
			cout<<endl<<"deleted node is "<<temp->data;
			delete temp;

			}


		}
		void  Node::deletion_end()
		{
			Node *temp, *p;
			if(head==Null)
			{
			cout<<endl<<"underflow condition";
			}
			else
			{
			p=head;
			while(p->next!=Null)
			{
			temp=p;
			p=p->next;
			}
			temp->next=Null;
			cout<<endl<<"deleted item is :"<<p->data;
			delete p;
			}
		}
		void  Node::search()
		{
			int num,c=0;
			Node *temp;
			if(head==Null)
			{
			cout<<endl<<"underflow condition";
			}
			else
			{
			cout<<endl<<"enter no that you want to search";
			cin>>num;
			temp=head;
			while(temp!=Null)
			{
			c++;
			if(temp->data==num)
			{

			cout<<endl<<"successfuly found at:"<<c;
			break;
			}
			temp=temp->next;
			}

			if(temp==0)
			{
			cout<<endl<<"data not found";
			}

		       }
		}
 void main()
 {
	clrscr();
	int choice;
	Node o;
	while(1)
	{
	cout<<endl<<"       Welcome to Linked List Operatin           ";
	cout<<endl<<"enter 1  for creation";
	cout<<endl<<"enter 2 for travering";
	cout<<endl<<"enter 3 for insertion_beg";
	cout<<endl<<"enter 4 for insertion_mid";
	cout<<endl<<"emnter 5 for insertion_end";
	cout<<endl<<"enter 6 for deletion_beg";
	cout<<endl<<"enter 7 for deletion_mid";
	cout<<endl<<"enter 8 for deletion_end";
	cout<<endl<<"enter 9 for searchinhg";
	cout<<endl<<"enter 10 for exit";
	cout<<endl<<"----------------------------";
	cout<<endl<<"enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1:

			o.creation();
			getch();
			clrscr();
			break;
		case 2:

			o.traverse();
			getch();
			clrscr();
			break;
		case 3:

			o.insertion_beg();
			getch();
			clrscr();
			break;
		case 4:

			o.insertion_mid();
			getch();
			clrscr();
			break;
		case 5:

			o.insertion_end();
			getch();
			clrscr();
			break;
		case 6 :

			o.deletion_beg();
			getch();
			clrscr();
			break;
		case 7:

			o.deletion_mid();
			getch();
			clrscr();
			break;
		case 8:

			o.deletion_end();
			getch();
			clrscr();
			break;
		case 9:

			o.search();
			getch();
			clrscr();
			break;
		case 10:
			exit(1);
		default:
			cout<<endl<<"invalid choice";
			getch();
			clrscr();
	}
    }
}
