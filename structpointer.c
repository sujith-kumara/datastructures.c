#include<stdio.h>
#include<string.h>
struct Book{
 int id,prize;
 char name[100];
 }b,*b1;
 void main()
 {
  b1=&b;
  printf("enter book id\n");
  scanf("%d",&b.id);
  printf("enter book name\n");
  scanf("%s",b.name);
  printf("enter book prize\n");
  scanf("%d",&b.prize);
  printf("book id=%d\n",b1->id);
  printf("book name=%s\n",b1->name);
  printf("book prize=%d\n",b1->prize);
  }
