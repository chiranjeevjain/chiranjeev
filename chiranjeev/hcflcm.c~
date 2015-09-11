#include<stdio.h>
void main()
{
	int a,b,rem,temp,r,prod,hcf,lcm;
	printf("\n enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	prod = a*b;
	if(b>a)
	{
		temp =b;
		b=a;
		a= temp;
	}
	r = a%b;
	while(r!=0)
	{
		temp =b;
		b= r;
		a = temp;
		r =a%b;	
	}
	
	hcf =b;
	lcm = prod/hcf;
	printf("\n hcf : %d lcm : %d \n ",hcf,lcm);

}
	


