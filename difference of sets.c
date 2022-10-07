#include <stdio.h>

int main() {
    int A[100],B[100],C[100],k=0,n,m;
   
   for(int i=0;i<4;i++)
   {
       scanf("%d",&A[i]);
   }
    for(int i=0;i<4;i++)
   {
       scanf("%d",&B[i]);
   }
   
    for(int i=0;i<4;i++)
   { 
       int flag=0;
       for(int j=0;j<4;j++)
   {
       if(A[i]==B[j])
       {
           flag=1;
           break;
       }
       
   }
        if(flag==0)
        {
            C[k]=A[i];
            k++;
        }
   }
       
   
    for(int i=0;i<k;i++)
   {
       printf("%d\t",C[i]);
   }


   




    return 0;
}
