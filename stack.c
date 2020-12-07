// simple stack
#include<stdio.h>
#define max 20
int top=0;
int isempty()
{
 if(top==0)
  return (1);
 else
  return (0);
 }
 int isfull()
  {
   if(top==max)
    return (1);
   else
    return (0);
  }
  void push(int stack[],int item)
   {
    if(!isfull)
     {
     stack[top]=item;
     top++;}
    else
     printf("the stack is full");
    } 
   int pop(int stack[])
    {
     if(!isempty)
      {
      top=top-1;
      return (stack[top]);}
     else
      printf("stack is empty ");
      return 0;
     }
     int peek(int stack[])
      {
       if(!isempty)
        return (stack[--top]);
       else
        printf("stack is empty");
        return 0;
       }
      void display(int s[])
      {
       int i;
       for(i=top-1;i>=0;i--)
        printf("%d",i);
       }
       void main()
       {
        int s[max],choice,ele,b;
        do
        {
         printf("enter your choice");
         printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit");
         scanf("%d",&choice);
         switch(choice)
         {
          case 1:printf("enter the element to be added");
                 scanf("%d",&ele);
                 push(s,ele);
                 break;
          case 2:b=pop(s);
                 if(b==0)
                  break;
                 printf("the top element in the stack is %d",b);
                 break;
          case 3:ele=peek(s);
                 printf(" the peekelement is %d",ele);
                 break;
          case 4:display(s);
                 break;
          case 5:break;
          default:printf("invalid choice");
          }
         }
          while(choice!=5);
        }
         
        
      
