#include<stdio.h>
#include<math.h>
void main()
{
	int num,rem,arm,temp;
	arm =0;
	printf("\n enter the number \n");
	scanf("%d",&num);
	temp  = num;
	while(num!=0)
	{
		rem = num%10;
		arm = arm + pow(rem,3);
		num = num/10;
		
	}
	if(arm == temp)
		printf("\n %d is a armstrong number \n",temp);
	else
		printf("\n %d not a  armstrong number \n",temp);
		
}
