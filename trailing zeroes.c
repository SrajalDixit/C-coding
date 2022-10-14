#include<stdio.h>


int trailingZeroes(int n){

    int num,c=0;
    while(n!=0)
    {
        num=n%10;
        if(num==0)
            c++;
        n=n/10;
        return c;
        
    }
}
void main(){
     int n,fact=1;
        printf("Enter a no.");
        scanf("%d",&n);
      
          
     
        for(int i=n;i>0;i--)
        {
            fact=i*fact;
            
        }
    printf("%d",trailingZeroes(fact));

        
       
}
