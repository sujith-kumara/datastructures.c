#include<stdio.h>
#include<string.h>
struct Book{
 int id,prize;
 char name[100];
 };
 void main()
 {
  struct Book b;
  printf("enter book id\n");
  scanf("%d",&b.id);
  printf("enter book name\n");
  scanf("%s",b.name);
  printf("enter book prize\n");
  scanf("%d",&b.prize);
  printf("book id=%d\n",b.id);
  printf("book name=%s\n",b.name);
  printf("book prize=%d\n",b.prize);
  }
