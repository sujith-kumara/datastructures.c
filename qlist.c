//implement queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct NODE{
int data;
struct NODE*link;
};
typedef struct NODE node;
node*rear;
node*front;
void insert(int value)
{
 node*newnode=(node*)malloc(sizeof(node));
 newnode->data=value;
 newnode->link=NULL;
 if(rear==NULL)
 {
  rear=newnode;
  front=newnode;
 }
 else
 {
  rear->link=newnode;
  rear=newnode;
 }
}
void delete()
{
 if(front==NULL)
 {
  printf("\nQueue is Empty\n");
 }
 else
 {
  node*temp=front;
  front=front->link;
  free(temp);
 }
}
void display()
{
 if(front==NULL)
 {
 printf("\nQueue is Empty\n");
 }
 else
 {
  node*temp=front;
  printf("Elements are\n");
  while(temp->link!=NULL)
  {
   printf("%d\n",temp->data);
   temp=temp->link;
  }
  if(temp->link==NULL)
   {
    printf("%d\n",temp->data);
   }
 }
}
void main()
{
 int choice,ele;
 do
 {
  printf("\nEnter your choice\n");
  printf("\n1.push\n2.pop\n3.display\n4.exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("\nenter the element to be added\n");
          scanf("%d",&ele);
          insert(ele);
          break;
   case 2:delete();
          break;
   case 3:display();
          break;
   case 4:break;
   default:printf("\ninvalid choice\n");
  }
 }
 while(choice!=4);
}
