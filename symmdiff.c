#include<stdio.h>
void main()
{
int A[100],B[100],C[100],k=0;

printf("Enter no of elements of A");
int n;
scanf("%d",&n);

printf("Enter no of elements of B");
int m;
scanf("%d",&m);

printf("enter elements of A");
for(int i=0;i<n;i++)
{
    scanf("%d",&A[i]);
    
}

printf("enter elements of B");
for(int i=0;i<m;i++)
{
    scanf("%d",&B[i]);
    
}
for(int i=0;i<n;i++)
{
    int flag=0;
    for(int j=0;j<m;j++)
    {
        if(A[i]==B[j])
        flag++;
    }
    if(flag==0)
    {
    C[k]=A[i];
    k++;}
}
for(int i=0;i<m;i++)
{
    int flag=0;
    for(int j=0;j<n;j++)
    {
        if(B[i]==A[j])
        flag++;
    }
    if(flag==0)
    {
    C[k]=B[i];
    k++;}
}
printf("symmetric difference is :");
for(int i=0;i<k;i++)
{
    printf("%d ",C[i]);
}


}
