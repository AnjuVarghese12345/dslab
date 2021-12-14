#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
struct stack
{
int no;
struct stack *next;
}
*start= NULL;
typedef struct stack st;
void main()
{
void push();
int pop();
void display();
char ch
int choice
int item;
do
{
clrscr();
printf("1. PUSH \n");

printf("2. POP \n");

printf("3. TRAVERSE \n");

printf("Enter your choice \n");
scanf("%d",&choice);
switch (choice)
{
case 1: 
 push(); 
 break;
case 2:
 item=pop( )
 printf("The deleted element is",item); 
 break;
case 3:
 display();
 break;
default:printf("Wrong choice");
};
prinf("do you want to continue(y/n) \n");
fflush(stdin);
scanf("%d",&ch);
}
while ((ch='Y') || (ch = 'y'));
}
void push()
{
st *node;
node = new(st);
printf("Enter the number to be insert");
scanf("%d",&node->no) ;
node->next = start;
start = node;
}
int pop()
{
st temp;
temp = start;
if (start == NULL)
printf("stack is already empty");
getch();
exit(0);
else
{
start= start->next;
delete(temp); 
}
return (temp->no);
}
void display()
{
st *temp;
temp = start; 
while(temp->next != NULL)
{
    printf("no=" << temp->no); 
    temp = temp->next;
}
printf("no", temp→no);
}
}
