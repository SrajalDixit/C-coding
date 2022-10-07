#include <stdio.h>

int main() 
    {
        int n,fact=1,sum=0;
        printf("Enter a no.");
        scanf("%d",&n);
      for(int j=n;j>0;j--){
          
     
        for(int i=j;i>0;i--)
        {
            fact=i*fact;
            
        }
        sum=fact+sum;
        fact=1;
      }  
        printf("%d",sum);
        

    return 0;
}
