#include<stdio.h>
void main()
{
	float tempf,tempc;
	printf("\n enter the temperature in fahrenheit\n");
	scanf("%f",&tempf);
	tempc = (tempf-32)*(5.0/9.0);
	printf("\n temperature in celcius is : %f \n ", tempc); 
}
