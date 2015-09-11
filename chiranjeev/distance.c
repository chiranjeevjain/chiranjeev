#include<stdio.h>
#include<math.h>

void main()
{
	int x1,y1,x2,y2;
	printf("\n enter the coordinates of first point:");
	scanf("%d%d",&x1,&y1);
	printf("\n enter the coordinates of second point:");
	scanf("%d%d",&x2,&y2);
	float dist = sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
	printf("\n distance is : %f \n",dist);

	
}
