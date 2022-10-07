#include<stdio.h>
void main()
{
    int n,m,x, k=0;
   int A[100],B[100],C[100];

   printf("Enter A's no. of elements ");
   scanf("%d",&n);


    printf("Enter B's no. of elements ");
    scanf("%d",&m);
    
    for(int i=0;i<n;i++)
{
    scanf("%d",&A[i]);


}
for(int j=0;j<m;j++)

{
    scanf("%d",&B[j]);


}
 

 for(int i=0;i<n;i++)
{

     for(int j=0;j<m;j++)
{
    if(A[i]==B[j])
    {
        C[k]=A[i];
        k++;
        
        
        
    }


}


}

 for(int i=0;i<k;i++)
{
    
printf("%d\t",C[i]);

}


}
