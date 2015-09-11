#include<stdio.h>
#include<math.h>
int eval(int x,int n)
{
	int i,y;
	for(i=1;i<=n;i++)
	{
		y += pow(x,i);
	}
	return y;
}
void main()
{

int x,n,y;
printf("\n enter x and n for given expression\n");
scanf("%d%d",&x,&n);
 y = eval(x,n);
 printf("%d\n",y);
}
