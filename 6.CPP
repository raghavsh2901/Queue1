#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert (int);
int del();
void display();
struct queue
{
int info;
struct queue*next;
};
typedef struct queue node;
node * front= NULL;
node * rear= NULL;
void main()
{
int ch,item;
clrscr();
while(1)
{
printf("\n choose any option \n 1.insert 2.delete 3.display 4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter any item");
scanf("%d",&item);
insert(item);
break;
case 2:printf("deleted item, is %d", del());
break;
case 3:display();
break;
case 4:exit(0);
}
}
}
void insert(int item)
{
node*n;
n=(node*)malloc(sizeof (node));
n->info=item;
n->next=NULL;
if(front==NULL)
{
front=n;
rear=n;
}
else
{
rear->next=n;
rear=n;
}
}
int del()
{
node*n;
int x;
if(front==NULL)
{
printf("queue is underflow \n");
return 0;
}
else
{
n=front;
front=n->next;
x=n->info;
free(n);
return x;
}
}
void display()
{
node*i;
printf("elements of queue are \n");
for(i=front;i!=NULL;i=i->next)
{
printf("%d\n",i->info);
}
}
