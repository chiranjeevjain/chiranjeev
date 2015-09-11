#include<stdio.h>
void main()
{
	int num,sum,temp,rem;
	printf("\n enter the number\n");
	scanf("%d",&num);
	temp =num;
	
	while(num>9)
	{
		sum =0;
		while(num>0)
		{
			rem = num%10;
			num = num/10;
			sum += rem;
		}
		num =sum;
	}
	printf("\n generic root of %d is: %d\n",temp,num);
}
