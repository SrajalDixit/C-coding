#include<stdio.h>

void main()
{
    int n,A[100];
    printf("Enter limit of array");
scanf("%d",&n);

for(int i=0;i<n;i++)
{
    scanf("%d",&A[i]);

}
int temp=A[0];
for(int i=0;i<n;i++)
{
    if(A[i]<temp)
    {
        temp=A[i];
    }

}
printf("his sister will get %d",temp);

}
