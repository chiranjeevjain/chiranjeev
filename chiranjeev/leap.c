#include<stdio.h>
void main()
{
	int y;
	printf("\n enter the year\n");
	scanf("%d",&y);
	if((y%4 == 0 && y%100 !=0) || y%400 == 0)
		printf("\n this is a leap year\n");
	else
		printf("\n not  a leap year\n");
}
