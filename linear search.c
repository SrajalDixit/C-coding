#include<stdio.h>
void main()
{
    int A[100],n,flag=0;

    printf("enter no. of elements:");
    scanf("%d",&n);

    printf("enter elements:");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("enter an element to be search;");
    int m;
    scanf("%d",&m);

    for(int i=0;i<n;i++)
    {
        if(A[i]==m)
        printf("%d\t",i+1);

    
   }
}
