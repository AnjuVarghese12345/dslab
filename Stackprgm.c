#include<stdio.h> 
#include<stdlib.h>
#define MAXSIZE 5
void main()
{
int stack[MAXSIZE],ch,top=-1,item,i;
printf("*******Stack operations********\n");
v:
printf("1.PUSH \n2.POP\n3.DISPLAY");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
if(top==MAXSIZE-1)
{
printf("\nStack is full!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}
break;
}
case 2:
{
if(top==-1)
{
printf("\nStack is empty!");
}
else
{
item=stack[top];
top=top-1;
printf("\nDeleted element is %d\n",item);
}  
break;
} 
case 3:
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
break;
}
}
char c;
printf("\nDo you want to continue:");
scanf("%s",&c);
if(c=='y')
goto v;
}
