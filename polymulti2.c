//multiplication of two polynomials
#include<stdio.h>
#include<malloc.h>
struct link
{
 int coeff;
 int expo;
 struct link*next;
};
typedef struct link poly;
poly *poly1, *poly2, *poly3;
poly *newnode(int coeff,int expo)
{
 poly *temp;
 temp=(poly*)malloc(sizeof(poly));
 temp->coeff = coeff;
 temp->expo = expo;
 temp->next=NULL;
 return(temp);
}
void readpoly(poly ** myNode, int coeff, int expo) 
{
  poly *lPtr, *pPtr, *qPtr = *myNode;
  lPtr = newnode(coeff, expo);
   
  /* inserting new node at appropriate position */
  if (*myNode == NULL || (*myNode)->expo < expo) 
  {
    *myNode = lPtr;
    (*myNode)->next = qPtr;
    return;
  }
   
  /* placing new node between two nodes or end of node */
  while (qPtr) 
  {
    pPtr = qPtr;
    qPtr = qPtr->next;
    if (!qPtr) 
    {
      pPtr->next = lPtr;
      break;
    } 
    else if ((expo < pPtr->expo) &&(expo > qPtr->expo))
    {
    lPtr->next = qPtr;
    pPtr->next = lPtr;
    break;
    }
  }
    return;
}
void addpoly(poly **n1, int coeff, int expo) 
{
    poly *x = NULL, *temp = *n1;
    if (*n1 == NULL || (*n1)->expo < expo) 
    {
      /* adding at the front */
      *n1 = x = newnode(coeff, expo);
      (*n1)->next = temp;
    } 
    else 
    {
      while (temp) 
      {
       if (temp->expo == expo) 
       {
      /* updating the co-efficient value  alone */
        temp->coeff = temp->coeff + coeff;
        return;
       }
       if (temp->expo > expo && (!temp->next || temp->next->expo < expo)) 
      {
      /* inserting in the middle or end */
      x = newnode(coeff, expo);
      x->next = temp->next;
      temp->next = x;
      return;
      }
    temp = temp->next;
      }
      x->next = NULL;
      temp->next = x;
    }
  }
 
  void multiplypoly(poly **n1, poly *n2, poly *n3) {
    poly * temp;
    int coeff, expo;
     
    temp = n3;
     
    /* if both input list are absent, then output list is NULL */
    if (!n2 && !n3)
      return;
     
    /* input list 1(n2) is absent, then output list is input list2 (n3) */
    if (!n2) {
      *n1 = n3;
    } else if (!n3) {
       
      /*
       * list n3 is absent, then o/p list is n2
       */
      *n1 = n2;
    } else {
      while (n2) {
    while (n3) {
      /* multiply coefficient & add exponents */
      coeff = n2->coeff * n3->coeff;
      expo = n2->expo + n3->expo;
      n3 = n3->next;
      /* insert the above manipulated data to o/p list */
      addpoly(n1, coeff, expo);
    }
    n3 = temp;
    n2 = n2->next;
      }
    }
    return;
  }
  void display(poly *ptr) {
    int i = 0;
    int flag=0;
    while (ptr) {
      if(ptr->expo != 0 || ptr->expo!= 1 ){
    if(ptr->coeff > 0 && flag==0 ){
      printf("%dx^%d", ptr->coeff,ptr->expo);
      flag++;
    }
    else if (ptr->coeff > 0 && flag==1 )
      printf("+%dx^%d", ptr->coeff,ptr->expo);
    else if(ptr->coeff < 0)
      printf("%dx^%d", ptr->coeff,ptr->expo);
      }
      else if (ptr->expo == 0){
    if(ptr->coeff > 0 && flag==0 ){
      printf("%d", ptr->coeff);
      flag++;
    }
    else if (ptr->coeff > 0 && flag==1 )
      printf("+%d", ptr->coeff);
    else if(ptr->coeff < 0)
      printf("%d", ptr->coeff);
      }
      else if( ptr->expo== 1 ){
    if(ptr->coeff > 0 && flag==0 ){
      printf("%dx", ptr->coeff);
      flag++;
    }
    else if (ptr->coeff> 0 && flag==1 )
      printf("+%dx", ptr->coeff);
    else if(ptr->coeff < 0)
      printf("%dx", ptr->coeff);
      }
      ptr = ptr->next;
      i++;
    }
    printf("\n");
    return;
  }
  int main (int argc, char *argv[]) {
    int coeff, expo, i, n;
    int count;
    printf("Enter the number of coefficients in the multiplicand:");
    scanf("%d",&count);
    for(i=0;i<count;i++){
      printf("Enter the coefficient part:");
      scanf("%d", &coeff);
      printf("Enter the exponent part:");
      scanf("%d",&expo);
          readpoly(&poly1, coeff, expo);
    }
    printf("Enter the number of coefficients in the multiplier:");
    scanf("%d",&count);
    for(i=0;i<count;i++){
      printf("Enter the coefficient part:");
      scanf("%d", &coeff);
      printf("Enter the exponent part:");
      scanf("%d",&expo);
          readpoly(&poly2, coeff, expo);
    }
        printf("Polynomial Expression 1: ");
        display(poly1);
        printf("Polynomial Expression 2: ");
        display(poly2);
     
        multiplypoly(&poly3, poly1, poly2);
     
        printf("Output:\n");
        display(poly3);
   return 0;
       }

