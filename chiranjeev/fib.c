#include<stdio.h>
void main()
{
	int n,i,fib = 0,a=0,b=1;
	printf("\n how many fibonacci numbers do you want\n");
	scanf("%d",&n);
	printf("\n fibonacci numbers: %d %d ",a,b);
	for(i=1;i<=n-2;i++)
	{
		fib = a +b;
		a =b;
		b =fib;
		printf("%d ",fib);
		
	}
	printf("\n");
	
	 
}
