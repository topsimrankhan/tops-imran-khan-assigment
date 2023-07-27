//swapping without using third variable

#include<stdio.h>
int main()
{
	int a=10;
	int b=30;
	printf("\n before swapping value of a is %d b is %d",a,b);
	
	a=a+b;
	b=a-b;
	
	printf("\n after swapping value of a is %d b is %d",a,b);
	
	
	
	return 0;
}
