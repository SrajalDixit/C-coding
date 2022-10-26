/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int A,x,t,c,v,l,flag=0;
    printf("enter a no.");
    scanf("%d",&A);
   
   
    
    for(int i=10;i>0;i--)
    {
        
            x=pow(2,i);
            if(flag==0)
            {
            if(A>=x)
            {
            t=x;
            flag=1;
            
            }
            }
            
    }
    l=A-t;
   v=1+2*l;
   printf("%d position will be safe",v);
    

    return 0;
}
