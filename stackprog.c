# include<stdio.h>
# define MAX 5
int top=-1;
void push(int a[MAX],int item)
{
if (top==MAX-1)
printf("stack overflow");
else
{
    top=top+1;
    a[top]=item;
}


}
void pop(int a[MAX])
{
    if(top==-1)
    printf("not possible");
    else
    top=top-1;
}
void peek(int a[MAX])
{
    printf("%d",a[top]);
}
 void display(int a[MAX])
    {
     int i;
	 for(i=0;i<=top;i++)
		 printf("%d " , a[i]);
     }

void main()
{
    int a[MAX],el,ch;
     printf("enter a choice");
    scanf("%d",&ch);
   
    switch(ch)
    {
    case 1:
    
        printf("choice 1\n");
         printf("enter a no");
         scanf("%d",&el);
         push(a,el);
         display(a);
         break;


    case 2:
    
        printf("choice 2");
         printf("enter a no");
         scanf("%d",&el);
         pop(a);
         display(a);
         break;
    
     default:printf("wrong choice");
}
}
