#include<stdio.h>
void main()
{
	int roll;
	float m1,m2,m3,total,avg;
	printf("\n enter the student roll no: ");
	scanf("%d",&roll);
	printf("\n enter student marks in three subjeccts one by one out of 100 \n");
	scanf("%f %f %f",&m1,&m2,&m3);
	total = m1+m2+m3;
	avg = total/3;
	printf("\n total marks of student is :%f \n",total);
	printf("\n average marks of student is :%f \n",avg);
	
}
