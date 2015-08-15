#include<stdio.h>
void main()
{

	int even_sum,odd_sum;
	even_sum = 0;
	odd_sum = 0;
	int min,max;
	printf("\n enter the lower limit  and upper limit to be considered\n");
	scanf("%d%d",&min,&max);
	int i;
	for(i=min;i<=max;i++)
	{
		if(i%2==0)
			even_sum+=i;	
		else
			odd_sum+=i;
	}
	printf("\n even sum : %d \n odd sum : %d",even_sum,odd_sum);

}


