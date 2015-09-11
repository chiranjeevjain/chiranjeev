#include<stdio.h>
void main()
{
	 int num,rev,rem,temp;
	printf("\n enter the number \n");
	scanf("%d",&num);
	temp = num;
	rev = 0;
	while(num!=0)
	{
		rem = num%10;
		num = num/10;
		rev = rev*10 +rem;
	}
	printf("\n reverse of num : %d is %d\n",temp,rev);
	if(rev == temp)
	{
		printf("\n inputted number equal to reverse\n");
	}
	else
		printf("\n reverse is not equal to number\n");

}
