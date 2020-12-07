#include<stdio.h>
#include<string.h>
struct Book{
 int id,prize;
 char name[100];
 }b[3];
 void main()
 {
  int i,max=3;
   for(i=0;i<max;i++)
   {
    printf("enter book %d id\n",i+1);
    scanf("%d",&b[i].id);
    printf("enter book %d name\n",i+1);
    scanf("%s",b[i].name);
    printf("enter book %d prize\n",i+1);
    scanf("%d",&b[i].prize);
   }
   for(i=0;i<max;i++)
   {
    printf("book %d id=%d\n",i+1,b[i].id);
    printf("book %d name=%s\n",i+1,b[i].name);
    printf("book %d prize=%d\n",i+1,b[i].prize);
   }
  }
  
