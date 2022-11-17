#include<stdio.h>
void main()
{
	int a[100],b[100],i,j,m,n;
	printf("enter total no. of element in set A \n");
	scanf("%d",&m);
	printf("\n enter total no. of element in set B \n");
	scanf("%d",&n);
	printf("\n enter   element in set A \n");
	for(i=0;i<m;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("\n enter   element in set B \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&b[i]);	
	}printf("\n cartesian product : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("{%d,%d}",a[i],b[j]);	
		}
	}
	
	
}
