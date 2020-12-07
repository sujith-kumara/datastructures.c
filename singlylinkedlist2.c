#include<stdio.h>
#include<malloc.h>
struct NODE
{
 int item;
 struct NODE *link;
};
typedef struct NODE node;
node *head=NULL;
node*newnode(int val)
{
 node*p;
 p=(node*)malloc(sizeof(node));
 p->item=val;
 p->link=NULL;
}
void display()
{
 node *curr;
 curr=head;
 while(curr!=NULL)
 {
  printf("%d-",curr->item);
  curr=curr->link;
 }
}
node *insertfirst(int val)
{
 node *p;
 p=newnode(val);
 p->link=head;
 head=p;
 //return(p);
}
node* insertbefore(int item1,int val)
{
 node *curr=head,*prev=NULL,*p;
 while(curr!=NULL && curr->item!=item1)
 {
  prev=curr;
  curr=curr->link;
 }
 if(curr==NULL)
 {
  printf("Item not found\n");
 // return(h);
 }
 else
  {
   //p=newnode(val);
   //p->link=curr;
   //if(curr==h)
   if(prev=head)
    insertfirst(val);
    //h=p;
   else
    {
     p=newnode(val);
     p->link=prev->link;
     prev->link=p;
    }
   //return(h);
  }
}
void insertafter(int item1,int val)
{
 node *curr=head,*p;
 //printf("curr =%u",curr);
 while(curr!=NULL && curr->item!=item1)
 {
  curr=curr->link;
 }
 if(curr==NULL)
 {
  printf("item not found\n");
 }
 else
 {
  p=newnode(val);
  p->link=curr->link;
  curr->link=p;
 }
}
int main()
{
 int ch,po,it;
 node*head=NULL;
 do
 {
  printf("\n1.insert first\n2.insert after\n3.insert before\n4.display\n5.exit");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("enter the value to be inserted at the first position : ");
          scanf("%d",&po);
          head=insertfirst(po);
          break;
   case 2:printf("enter the item after which the element to be inserted: ");
          scanf("%d",&it);
          printf("enter the value to be inserted");
          scanf("%d",&po);
          insertafter(it,po);
          break;
   case 3:printf("enter the item before which the element to be inserted");
          scanf("%d",&it);
          printf("enter the value tobe inserted:");
          scanf("%d",&po);
          head=insertbefore(it,po);
          break;
   case 4:display();
          break;
   case 5:break;
   default:printf("invalid choice");
  }
 }while(ch!=5);
}
          

