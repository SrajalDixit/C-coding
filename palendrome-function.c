#include<stdio.h>

int palen(int n)
{
    int r,reverse=0,num=n,flag=0;
    while(num!=0)
    {
        r=num%10;
        reverse=reverse*10+r;
        num=num/10;
    }
    if(reverse==n)
    flag=1;
    else
    flag=0;
    
    return flag;
        
    }

void main()
{  int n;
    scanf("%d",&n);
    
    if(palen(n)==1)
    printf("YES");
    else
     printf("NO");
    
    
}
