#include<stdio.h>
void fib(int n)
{
	int a=0,b=1,c,i;
	printf("\n fibonacci series for number %d is:- %d %d",n,a,b);
	for(i=1;i<=n-2;i++)
	{
		c =a+b;
		a =b;
		b = c;
		printf(" %d ",c);	
			
	}
	printf("\n");	
	
}
void main()
{
	int n;
	printf("\n enter the number\n");
	scanf("%d",&n);
	fib(n);
	
}
