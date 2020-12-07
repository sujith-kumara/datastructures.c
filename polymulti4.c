//multiplication of two polynomials
#include<stdio.h>
#include<malloc.h>
struct link
{
 int coeff;
 int expo;
 struct link*next;
};
//typedef struct link poly;
/*poly*/struct link *poly1, *poly2, *poly3;
/*poly*/struct link newnode(int coeff,int expo)
{
 /*poly*/struct link *temp;
 temp=(struct link* )malloc(sizeof(struct link));
 temp->coeff = coeff;
 temp->expo = expo;
 temp->next=NULL;
 return(temp);
}
/*poly*/struct link readpoly(struct link start,int coeff,int expo)
{
 /*poly*/struct link temp,curr;
 temp=newnode(coeff,expo);

 if(start==NULL)
 {
  return temp;
 }
 curr=start;
 while(curr->next!=NULL)
 {
  curr=curr->next;
 }
 curr->next=temp;
 return start;
}
void display(struct link start)
{
 poly temp;
 if(start==NULL)
 {
  printf("\n The polynomial is empty");
 }
 else
 {
  temp=start;
  while(temp->next!=NULL)
  {
   printf("%dX^%d+",temp->coeff,temp->expo);
   temp=temp->next;
  }
  printf("%dX^%d",temp->coeff,temp->expo);
 }
}
/*poly*/struct link multiplypoly(struct link poly1,poly poly2)
{
 /*poly*/struct link first,second,res=NULL;
 for(first=poly1;first!=NULL;first=first->next)
  {
   for(second=poly2;second!=NULL;second->next)
   {
    res=addterm(res,first->coeff*second->coeff,first->expo*second->expo);
    return res;
   }
  }
 }
/*poly*/struct link addterm(struct link res,int coeff,int expo)
 {
  /*poly*/struct link temp,curr;
  int flag=0;
  temp=newnode(coeff,expo);
  /*temp->coeff=coeff;
  temp->expo=expo;
  temp->next=NULL;*/
  if(res==NULL)
  {
   return temp;
  }
  curr=res;
  while(curr!=NULL)
  {
   if(curr->expo==expo)
   {
    curr->expo=curr->expo+expo;
    flag=1
   }
   curr=curr->next;
  }
  if(flag==0)
  {
   curr=start;
   while(curr!=NULL)
   {
    curr->next;
   }
   curr->next=temp;
  }
  return res;
 }
 int main()
 {
  /*poly*/struct link poly1=NULL,poly2=NULL,res;
  int i,n;
  printf("\n Enter the no of terms in the first polynomial");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   printf("\nEnter the coefficient and exponent of %d term",i);
   scanf("%d%d",&coeff,&expo);
   poly1=readpoly(poly1,coeff,expo);
  }
  printf("\n The first polynomial is");
  display(poly1);
  printf("\n Enter the no of terms in the second polynomial");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   printf("\nEnter the coefficient and exponent of %d term",i);
   scanf("%d%d",&coeff,&expo);
   poly2=readpoly(poly2,coeff,expo);
  }
  printf("\n The second polynomial is");
  display(poly2);
  res=multiplypoly(poly1,poly2);
  printf("\n The resultant polynomial is:");
  display(res);
  return 0;
 }
