#include<stdio.h>
#include<stdlib.h>
int posn(int *arr,int n)
{
	int posn,i,larg=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>larg)
		{
			larg = arr[i];
			posn = i;
		}
	}
	return posn;	
}
void main()
{
	int n;
	printf("\n enter the size of array\n");
	scanf("%d",&n);
	int *arr =(int *)malloc(n*sizeof(int));
	printf("\n enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int pos = posn(arr,n);
	printf("\n largest element in array is :%d at position %d\n",arr[pos],pos);

}
