// implement stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct NODE
{
 int data;
 struct NODE*link;
};
typedef struct NODE node;
node*top=NULL;
void push(int value)
{
 node*temp=(node*)malloc(sizeof(struct NODE));
 temp->data=value;
 temp->link=top;
 top=temp;
}
void pop()
{
 node*del=top;
 if(top!=NULL)
 {
  top=top->link;
  free(del);
 }
 else
 {
  printf("The stack underflow");
 }
}
void TOP()
{
 node*t=top;
 printf("\nTop element is %d\n",t->data);
}
void display()
{
 node*head=top;
 printf("\nElements are:\n");
 while(head!=NULL)
 {
  printf("%d\t",head->data);
  head=head->link;
 }
}
void main()
{
 int choice,ele;
 do
 {
  printf("\nEnter your choice\n");
  printf("\n1.push\n2.pop\n3.display\n4.top\n5.exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("\nenter the element to be added\n");
          scanf("%d",&ele);
          push(ele);
          break;
   case 2:pop();
          break;
   case 3:display();
          break;
   case 4:TOP();
          break;
   case 5:break;
   default:printf("\ninvalid choice\n");
  }
 }
 while(choice!=5);
}
       
 

