#include<stdio.h>
void main()
{
	int a,b;
	printf("\n enter a and b:");
	scanf("%d%d",&a,&b);
	printf("\n  a: %d b: %d ",a,b);
	int temp;
	temp = a;
	a= b;
	b = temp;
	printf("\n after swapping");
	printf("\n  a: %d b: %d ",a,b);

}
