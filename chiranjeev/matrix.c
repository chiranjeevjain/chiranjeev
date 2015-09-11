#include<stdio.h>
#include<stdlib.h>
int i,j,k;
void add(int **arr1,int m,int n,int **arr2,int p,int q,int **sum)
{
	
	if(m==p && n==q)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				sum[i][j] = arr1[i][j]+arr2[i][j];
			}
		}
	}
	else 
		printf("\n addition not possible\n");
	
	

}
void mul(int **arr1,int m,int n,int **arr2,int p,int q,int **mult)
{
	if(n==p)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				
				for(k=0;k<p;k++)
				{
					mult[i][j] += arr1[i][k]*arr2[k][j];
				}
			}
		}
	}
	else
		printf("\n multiplication not possible\n");

}
void output(int **arr,int a ,int b)
{
	printf("\n ARRAY IS..\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
		
}
void input(int **arr,int a ,int b)
{
	printf("\n ENTER...\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf(" \n in input\n");
			scanf("%d",&arr[i][j]);
		}
	}
		
}
void main()
{
	int m,n,p,q;
	printf("\n enter no of rows in first matrix\n");
	scanf("%d",&m);
	printf("\n enter no of coloumn in first matrix\n");
	scanf("%d",&n);
	int **arr1 = NULL;
	arr1 = (int**)calloc(m*n,sizeof(int));
	if(arr1 == NULL)
		printf("\n error");
	input(arr1,m,n);
	output(arr1,m,n);
	printf("\n enter no of rows in second matrix\n");
	scanf("%d",&p);
	printf("\n enter no of coloumn in first matrix\n");
	scanf("%d",&q);
	int **arr2 = (int**)calloc(p*q,sizeof(int));
	input(arr2,p,q);
	output(arr2,p,q);
	int **sum= (int**)calloc(m*n,sizeof(int));
	add(arr1,m,n,arr2,p,q,sum);
	printf("\n ADDITION \n");
	output(sum,m,n);
	int **mult = (int**)calloc(m*q,sizeof(int));
	mul(arr1,m,n,arr2,p,q,mult);
	printf("\n multiplication\n");
	output(mult,m,q);

}
