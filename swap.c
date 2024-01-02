#include<stdio.h>

main()
{
	int a,b;
	int *p,*p1,swap;
	
	p = &a;
	p1 = &b;
	
	printf("Before Swapping \n\n");
	
	printf("Enter the value of A = ");
	scanf("%d",&a);
	
	printf("Enter the value of B = ");
	scanf("%d",&b);
	
	swap = *p;
	*p = *p1;
	*p1 = swap;
	
	printf("\nAfter Swapping  \n\n");
	
	printf("Value of A = %d\n",*p);
	printf("Value of B = %d",*p1);
	
}