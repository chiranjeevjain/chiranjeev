#include<stdio.h>
void main()
{
	int n,i,j,k,l;
	printf("\n enter the number of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(l=n-i;l>=1;l--)
			printf(" ");
		for(j=1;j<=i;j++)
			printf(" %d",j);
		for(k=i-1;k>=1;k--)
			printf(" %d",k);
		printf("\n");	
	}
}  
