#include<stdio.h>

int fact(int n)
{
    int ans=1;
    if(n==1)
     return 1;
    else{
     ans=fact(n-1)*n;
     return ans;
        
    }
}
void main()
{  int n;
    scanf("%d",&n);
    printf("%d",fact(n));
}
