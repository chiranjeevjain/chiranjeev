#include<string.h>
#include<stdio.h>
void main()
{
	int num,rev,rem,i;
	i=0;
	char rev_w[25][25];
	char words[25][25] = {"zero","one","two","three","four","five","six","seven","eigth","nine"};
	
	rev = 0;
	printf("\n enter the number to be reversed \n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem = num%10;
		num = num/10;
		rev = rev*10 + rem;
		strcpy(rev_w[i],words[rem]);
		puts(rev_w[i]);
		i++;
		
	}
	
	//printf("\n reverse number is : %d \n",rev);
	
	
}
