#include<stdio.h>
void main()
{
	char c;
	printf("\n enter the character\n");
	scanf("%c",&c);	
	if(c>='a' && c<='z')
		printf("\n lowercase character\n");
	else if(c>='A' && c<='Z')
		printf("\n uppercase character\n");
	else if(c>='0' && c<= '9')
		printf("\n digit\n");
	else 
		printf("\n special character\n");

}
