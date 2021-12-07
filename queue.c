#include<stdio.h> 
void main()
{
int queue[100],ch=1,rear=0,front=0,item,i,n,x=n;
printf("*******Queue operations using Array********\n");
printf("Enter the size of the array:");
scanf("%d",&n);
v:
printf("1.Enqueue \n2.Dequeue\n3.Diaplay");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(rear==x)
{
printf("\nQueue is full!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&item);
queue[rear]=item;
rear=rear+1;
}
break;
case 2:
if(front==rear)
{
printf("\nQueue is empty!");
}
else
{
printf("\nDeleted element is %d\n",queue[front]);
front=front+1;
n++;
}
break;
case 3:
if(front==rear)
{
printf("\nQueue is empty!!");
}
else
{
printf("\nQueue is...\n");
for(i=front;i<rear;i++)
{
printf("%d\n",queue[i]);
}
}
break;
}
char c;
printf("Do you want to continue(y/n)?");
scanf("%s",&c);
if(c=='y')
goto v;
}

