#include<stdio.h>
void main()
{
	int month,no_days,y;
	printf("\n enter the month number\n");
	scanf("%d",&month);
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
		no_days = 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		no_days = 30;
	else if (month == 2)
	{
		printf("\n enter the year\n");
		scanf("%d",&y);
		if((y%4 == 0 && y%100 !=0) || y%400 == 0)
			no_days = 29;
		else
			no_days = 28;
 
	
	} 
	else
		printf("\n incorrect month number\n");

printf("\n no of days are: %d\n",no_days);

}
