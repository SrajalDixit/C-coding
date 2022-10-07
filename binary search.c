#include<stdio.h>
void main()
{
    int A[100],n,mid;

    printf("enter no. of elements:");
    scanf("%d",&n);

    printf("enter elements:");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);

    }
    int beg=0;
    int end=n-1;

    mid=(beg+end)/2;

    printf("enter an element to be search;");
    int m;
    scanf("%d",&m);
int flag=0;
    while(flag==0)
    {
        if(A[mid]>m){
        end=mid;
        mid=(beg+end)/2;

        }

        else if(A[mid]==m){
         printf("%d",mid+1);
         flag=1;}

         else if(A[mid]<m) {
         beg=mid;
          mid=(beg+end)/2;
          }

     }


}
