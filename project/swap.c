//Swapping without using third variable

#include<stdio.h>
main()
{
	int a,b;
	printf("Enter value of a & b : ");
	scanf("%d%d",&a,&b);
	printf("\n before swapping a=%d & b=%d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	/*
	a=a+b;
	b=a-b;
	a=a-b;
	*/
	printf("\n after swapping a=%d & b=%d",a,b);
}
