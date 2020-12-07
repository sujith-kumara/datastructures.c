// structure using function
void bookprint(struct book);
struct book{
int id,price;
char name[100];
}b;
void main()
{
 printf("enter book id\n");
 scanf("%d",&b.id);
 printf("book name\n);
 scanf("%s",b.name);
 printf("enter prize");
 scanf("%d",&price);
 bookprint(b);
 }
 void bookprint(struct book b1)
 {
  printf("book id=%d\n",b1.id);
  printf("book name=%s\n",b1.name);
  printf("book prize=%d\n",b1.price);
 }
