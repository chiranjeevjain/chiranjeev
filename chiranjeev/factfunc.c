#include<stdio.h>
int fact(int n)
{
	int i,f;
	f=1;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
void main()
{
int n;
printf("\n enter the number\n");
scanf("%d",&n);
int f = fact(n);
printf("\n factorial is : %d \n",f);
	
}
