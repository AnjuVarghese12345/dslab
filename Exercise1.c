#include<stdio.h>
void main()
{
int a[10],i,pos,item,n,el,ch,key;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Array operatrions:");
printf("Enter 1 for Insertion\n");
printf("Enter 2 for Deletion\n");
printf("Enter 3 search an element\n");
printf("Enter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("Enter the position:");
scanf("%d",&pos);
printf("Enter the item:");
scanf("%d",&item);
for(i=n;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=item;
printf("After insertion:");
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
break;

}
case 2:
{
printf("Enter the element to be deleted:");    
scanf("%d",&el);
for(i=el-1;i<n;i++)
{
a[i]=a[i+1];
break;
}
printf("After deletion:");
for(i=0;i<n-1;i++)
{
printf("%d",a[i]);
}
break;
}
case 3:
{
printf("Enter the number to be searched:");
scanf("%d",&key);
int flag=0;
for(i=0;i<n;i++)
{
if (a[i]==key)
{
flag=0;
printf("Element found at the postion %d\n",i+1);
}
}
if(flag==0)
{
printf("Element not found");
break;
}
}
}
printf("Entered elements are:");
for(i=0;i<n;i++)
{
printf("%d \n",*(a+i));
}
}


