#include<stdio.h>
#include<math.h>
void main()
{
	int num,rem,arm,temp,low,upr,cur;

	printf("\n enter the lower limit and upper limit \n");
	scanf("%d%d",&low,&upr);
	cur = low;
	printf("\n armstrong numbers in range %d %d \n",low,upr);
	while(cur<=upr)
	{
		
		arm =0;
		temp  = cur;
		while(temp!=0)
		{
			rem = temp%10;
			arm = arm + pow(rem,3);
			temp = temp/10;
			
		}
		if(arm == cur)
			printf("\n %d\n ",cur);
		
		cur++;
	}			
}
