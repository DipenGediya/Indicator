#include<stdio.h>

int main()
{
	int i,n;
	printf("Size of Array = ");
	scanf("%d",&n);
	
	int a[n];
	int *p = &a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	printf("Value of array \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
}