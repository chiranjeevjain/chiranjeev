#include<stdio.h>
void main()
{
	int i,n,cnt;
	printf("\n enter the number\n");
	scanf("%d",&n);
	cnt = 0;
	for(i =1;i<=n/2;i++)
	{
		if(n%i == 0)
			cnt++;
	}
	cnt++;
	if(cnt!=2)
		printf("\n not  a prime number\n");
	else
		printf("\n is a prime number\n");
}
