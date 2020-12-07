#include<stdio.h>
#include<malloc.h>
struct NODE
{
 int item;
 struct NODE *link;
};
typedef struct NODE node;
node *top=NULL;
node *newnode(int val)
{
 node *p;
 p=(node*)malloc(sizeof(node));
 p->item=val;
 p->link=NULL;
}
void displaystack()
{
 node *curr;
 curr=top;
 while(curr!=NULL)
 {
  printf("%d-",curr->item);
  curr=curr->link;
 }
 //printf("%d-",curr->item);
}
int isempty()
{
 if(top==NULL)
  return(1);
 else
  return(0);
}
void push(int val)
{
 node *p;
 p=newnode(val);
 p->link=top;
 top=p;
}
int pop()
{
 node *curr=top;
 int item;
 if(!isempty())
 {
  item=top->item;
  top=top->link;
  free(curr);
  return(item);
 }
 else
  {
   printf("stack is empty");
  }
}
int main()
{
 int ch,po,it;
 do
 {
  printf("\n1.push\n2.pop\n3.display\n4.exit");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("enter the value to be inserted  : ");
          scanf("%d",&po);
          push(po);
          break;
   case 2:if(!isempty())
          {
           printf("item popped: %d",pop());
          }
          else
           printf("the list is empty");
          break;
   case 3:displaystack();
          break;
   case 4:break;
   default:printf("invalid choice");
  }
 }while(ch!=4);
}
     

