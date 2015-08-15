#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float disc,r1,r2;
	printf("\n enter a,b,c  coefficients of a equation\n");
	scanf("%d%d%d",&a,&b,&c);
	disc = b*b -4*a*c;
	printf("\n discremenant : %f ",disc);
	if(disc>0)
	{	
		r1 = (-b+sqrt(disc))/(2*a);
		r2 = (-b-sqrt(disc))/(2*a);
	}
	else if(disc==0)
	{
	
		r1=r2=-b/(2*a);
	}
	else
	{
		r1 = (-b+sqrt(-disc))/(2*a);
		r2 = (-b-sqrt(-disc))/(2*a);
	}
	printf("\n root1 : %f root2 : %f ",r1,r2);	
}
