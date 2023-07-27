#include<stdio.h>
int main()
{
   int n1,n2,sum,sub,multi;
   float divison,modulo;
   printf(" Enter value of n1 : ");
   scanf("%d", &n1);
   printf(" Enter value of n2 : ");
   scanf("%d", &n2);
   sum=n1+n2;
   sub=n1-n2;
   multi=n1*n2;
   divison=n1/n2;
   modulo=n1%n2;
   printf("Sum=%d\n",sum);
   printf("Substraction=%d\n",sub);
   printf("Multiplication=%d\n",multi);
   printf("Division=%.2f\n",divison);
   printf("modulo=%f",modulo); 
}   
