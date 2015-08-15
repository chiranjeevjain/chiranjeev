#include<stdio.h>
void main()
{
	int num1,num2,num3,largest;
	printf("\n enter three numbers\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	largest = num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
	printf("\n largest number is : %d \n",largest);
	
}
