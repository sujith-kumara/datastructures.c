// quick sort 
#include<stdio.h>
void swap(int*p,int*q)
{
 int temp;
 temp=*p;
 *p=*q;
 *q=temp;
}
int partition(int a[],int start,int finish)
{
 int i,j,key;
 key=a[start];
 i=start+1;
 j=finish;
 do
  {
   while(i<=finish&&a[i]<key)
    {i++;}
   while(j>start&&a[j]>key)
    {j--;}
   if(i<j)
    {swap(&a[i],&a[j]);}
  }while(i<j);
  swap(&a[start],&a[j]);
  return j;
 }
 
 int quicksort(int a[],int lb,int ub)
 {
  int k;
  if(lb<ub)
  
  {
   k=partition(a,lb,ub);
   quicksort(a,lb,k-1);
   quicksort(a,k+1,ub);
  }
  }
 void main()
 {
  int i,j,n,a[50];
  printf("enter number of elements\n");
  scanf("%d",&n);
  printf("enter numbers\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  quicksort(a,0,n-1);
  printf("Array after sort\n");
  for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
  }
 }
