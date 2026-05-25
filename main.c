#include <stdio.h>
#include <stdlib.h>

int main()
{

  float n1,n2;
  char op;
addition,substraction,multiplication,divition

  printf("             SIMPLE CALCULATOR\n");

 printf("Enter first number        :");
 scanf("%f",&n1);

 printf("enter operator(+,-,*,/)   :");
 scanf("%s",&op);

 printf("enter second number       :");
 scanf("%f",&n2);

 if(op=='+')
 {
     printf("answer                :%f",n1+n2);
 }
 else if (op=='-')
 {
     printf("answer                :%f",n1-n2);
 }
 else if (op=='*')
 {
     printf("answer                :%f",n1*n2);
 }
 else if (op=='/')
 {
     printf("answer                :%f",n1/n2);
 }







    return 0;
}
