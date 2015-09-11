#include<stdio.h>
void main()
{
	int n,i,fact =1;
	printf("\n enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact *=i;
	}
	printf("\n factorial of the number : %d \n",fact);
}
