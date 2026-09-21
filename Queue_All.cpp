C++ Implementation of Simple Queue
//eg of simple queue:
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
class Queue
{
private:

ARYAN COLLEGE AJMER | Queue — Data Structures Notes

Page 7 of 10

int queue[MAXSIZE];
int front;
int rear;
public:
Queue()
{
front=-1;
rear=-1;
}
void insertion()
{
int num;
if(rear==MAXSIZE-1)
{
cout<<endl<<"Overflow Condition";
}
else
{
cout<<endl<<"enter a no";
cin>>num;
if(rear==-1 || front==-1)
{
front++;
rear++;
queue[rear]=num;
}
else
{
rear++;
queue[rear]=num;
}
cout<<endl<<"successfully inserted";
}
}
void deletion()
{

ARYAN COLLEGE AJMER | Queue — Data Structures Notes

Page 8 of 10

int num;
if(front==-1)
{
cout<<endl<<"underflow condition";
}
else
{
num=queue[front];
cout<<endl<<"deleted item is "<<num;
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front++;
}
}
}
void traversing()
{
int i;
if(front==-1 || rear==-1)
{
cout<<endl<<"Underflow Condition";
}
else
{
for(i=front;i<=rear;i++)
{
cout<<endl<<queue[i];
}
}
}
void searching()
{

ARYAN COLLEGE AJMER | Queue — Data Structures Notes

Page 9 of 10

int num,i;
if(front==-1)
{
cout<<endl<<"underflow condition";
}
else
{
cout<<endl<<"enter data to be searched";
cin>>num;
for(i=front;i<=rear;i++)
{
if(queue[i]==num)
{
cout<<endl<<"successfully found at "<<i;
break;
}
}
if(i>rear)
{
cout<<endl<<"No data found";
}
}
}

};
void main()
{
Queue obj;
int choice;
clrscr();
while(1)
{
cout<<endl<<"Simple Queue Operations:";
cout<<endl<<"1. insertion";
cout<<endl<<"2. deletion";
cout<<endl<<"3. traversing";
cout<<endl<<"4. searching";

ARYAN COLLEGE AJMER | Queue — Data Structures Notes

Page 10 of 10

cout<<endl<<"5. exit";
cout<<endl<<"-------------";
cout<<endl<<"enter your choice";
cin>>choice;
switch(choice)
{
case 1:
obj.insertion();
clrscr();
break;
case 2:
obj.deletion();
break;
case 3:
obj.traversing();
break;
case 4:
obj.searching();
break;
case 5:
exit(1);
default:
cout<<endl<<"Invalid choice";

}
}
getch();
}


C++ Implementation (Array-based Circular Deque)
//eg of DQueue queue:
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
class DQueue
{
private:
int dqueue[MAXSIZE];
int front;
int rear;
public:
DQueue()
{
front=-1;
rear=-1;
}
void insertion_rear()
{
int num;
if(rear==MAXSIZE-1)
{
cout<<endl<<"Overflow Condition";
}
else
{
cout<<endl<<"enter a no";
cin>>num;
if(rear==-1 || front==-1)
{
front++;
rear++;
dqueue[rear]=num;
}
else
{
rear++;
dqueue[rear]=num;
}
cout<<endl<<"successfully inserted";
}

Aryan College Data Structures — Deque Notes

}
void deletion_front()
{
int num;
if(front==-1)
{
cout<<endl<<"underflow condition";
}
else
{
num=dqueue[front];
cout<<endl<<"deleted item is "<<num;
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
front++;
}
}
}
void insertion_front()
{
int num;
if(front==0)
{
cout<<endl<<"overflow condition";
}
else
{
cout<<endl<<"enter a no";
cin>>num;
if(front==-1)
{
front++;
rear++;
dqueue[front]=num;
}
else
{
front--;
dqueue[front]=num;

Aryan College Data Structures — Deque Notes

}
cout<<endl<<"successfully inserted...";
}
}
void deletion_rear()
{
int num;
if(rear==-1)
{
cout<<endl<<"underflow condition";
}
else
{
num=dqueue[rear];
cout<<endl<<"deleted item is "<<num;
if(front==rear)
{
front=-1;
rear=-1;
}
else
{
rear--;
}
}
}
void traversing()
{
int i;
if(front==-1 || rear==-1)
{
cout<<endl<<"Underflow Condition";
}
else
{
for(i=front;i<=rear;i++)
{
cout<<endl<<dqueue[i];
}
}
}
void searching()
{
int num,i;

Aryan College Data Structures — Deque Notes

if(front==-1)
{
cout<<endl<<"underflow condition";
}
else
{
cout<<endl<<"enter data to be searched";
cin>>num;
for(i=front;i<=rear;i++)
{
if(dqueue[i]==num)
{
cout<<endl<<"successfully found at "<<i;
break;
}
}
if(i>rear)
{
cout<<endl<<"No data found";
}
}
}

};
void main()
{
DQueue obj;
int choice;
clrscr();
while(1)
{
cout<<endl<<"Simple Queue Operations:";
cout<<endl<<"1. insertion at rear";
cout<<endl<<"2. insertion at front";
cout<<endl<<"3. deletion at front";
cout<<endl<<"4. deletion at rear";
cout<<endl<<"5. traversing";
cout<<endl<<"6. searching";
cout<<endl<<"7. exit";
cout<<endl<<"-------------";
cout<<endl<<"enter your choice";
cin>>choice;
switch(choice)
{

Aryan College Data Structures — Deque Notes

case 1:
obj.insertion_rear();
clrscr();
break;
case 2:
obj.insertion_front();
break;
case 3:
obj.deletion_front();
break;
case 4:
obj.deletion_rear();
break;
case 5:
obj.traversing();
break;
case 6:
obj.searching();
break;
case 7:
exit(1);
default:
cout<<endl<<"Invalid choice";

}
}
getch();
}







#include<iostream.h>
#include<conio.h>
#include<process.h>
#define MAX 5
class CQueue
{
private:
int front;

int rear;
int cqueue[MAX];
public:
CQueue()
{
front=-1;
rear=-1;
}
void insertion()
{
int num;
if(((rear+1)%MAX)==front)
{
cout<<endl<<"overflow condition";
}
else
{
cout<<endl<<"enter a no";
cin>>num;
if(rear==-1)
{
front=0;
rear=0;

cqueue[rear]=num;
}
else
{
rear=(rear+1)%MAX;
cqueue[rear]=num;
}
cout<<endl<<"successfully inserted...";
}
}
void deletion()
{
int num;
if(front==-1)
{
cout<<endl<<"underflow";
}
else
{
num=cqueue[front];
cout<<endl<<"deleted item is "<<num;
if(front==rear)
{

front=-1;
rear=-1;
}
else
{
front=(front+1)%MAX;
}
}
}

void traverse()
{
int i;
if(front==-1)
{
cout<<endl<<"underflow";
}
else
{
i=front;
while(1)
{

cout<<endl<<cqueue[i];

if(i==rear)
{
break;
}

i=(i+1)%MAX;

}
}
}

};

void main()
{
CQueue obj;
int choice;
clrscr();
while(1)
{
cout<<endl<<"Circular Operation:";
cout<<endl<<"1. insertion";
cout<<endl<<"2. deletion";
cout<<endl<<"3. traverse";

cout<<endl<<"4. exit";
cout<<endl<<"--------------------";
cout<<endl<<"enter your choice";
cin>>choice;
switch(choice)
{
case 1:
obj.insertion();
getch();
clrscr();
break;
case 2:
obj.deletion();
getch();
clrscr();
break;
case 3:
obj.traverse();
getch();
clrscr();
break;
case 4:
exit(1);

default:
cout<<endl<<"Invalid choice";

}
}
getch();
}
