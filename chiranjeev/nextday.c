#include<stdio.h>
void main()
{

	int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int d;
	int m;
	int y;
	printf("\n enter date,month,year in this order\n");
	scanf("%d%d%d",&d,&m,&y);
	/*if(m<1)
		m=1;
	if(m>12)
		m=12;
	if(d<1)
		d =1;
	if(d>days_in_month[m])
		d=days_in_month[m];*/
	
	if((y%4 == 0 && y%100 !=0) || y%400 == 0)
	{
		days_in_month[2] = 29;
	}
	else
		days_in_month[2] = 28;
	
	
	
	d+=1;
	if(d>days_in_month[m])
	{
		d=1;
		m+=1;
		if(m>12)
		{
			m=1;
			y+=1;
		}
	}
	printf("\n new day month year is %d/%d/%d :\n",d,m,y);
}

