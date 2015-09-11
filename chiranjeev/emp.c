#include<stdio.h>
void main()
{
	float bp,gp,hra,da;
	printf("\n enter the basic pay:");
	scanf("%f",&bp);
	da = .4*bp;
	printf("\n da is : %f \n",da);
	hra = .2*bp;
	printf("\n hra is : %f \n",hra);
	gp = bp + da +hra;
	printf("\n gross pay is : %f \n",gp);

}
