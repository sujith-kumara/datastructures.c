#include<stdio.h>
#include<string.h>
struct Book{
 int id,prize;
 char name[100];
 }b1,b2;
 void main()
 {
  
  printf("enter book1 id\n");
  scanf("%d",&b1.id);
  printf("enter book1 name\n");
  scanf("%s",b1.name);
  printf("enter book1 prize\n");
  scanf("%d",&b1.prize);
  printf("enter book2 id\n");
  scanf("%d",&b2.id);
  printf("enter book2 name\n");
  scanf("%s",b2.name);
  printf("enter book2 prize\n");
  scanf("%d",&b2.prize);
  printf("book1 id=%d\n",b1.id);
  printf("book1 name=%s\n",b1.name);
  printf("book1 prize=%d\n",b1.prize);
  printf("book2 id=%d\n",b2.id);
  printf("book2 name=%s\n",b2.name);
  printf("book2 prize=%d\n",b2.prize);
  }
