

#include <stdio.h>

void AND()
{
    printf("truth table of AND is:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(i==1 && j==1)
            printf("1   1  1\n");
            
            else
            {
                printf("%d  %d  0\n",i,j);
            }
        }
    }
        
        
}
void OR(){
    printf("truth table of OR is:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  %d  %d\n",i,j,i|j);
        }
    }
        
        
    
}
void NOT(){
    printf("truth table of OR is:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  %d  %d\n",i,j,!j);
        }
    }
}


void NAND()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  %d  %d\n",i,j,!(i&j));
        }
    }
}

void NOR()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  %d  %d\n",i,j,!(i|j));
        }
    }
}

void EXNOR()
    {
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  %d  %d\n",i,j,!(i^j));
        }
    }
    }
    
    void EXOR()
    {
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d  %d  %d\n",i,j,i^j);
        }
    }
    }


int main()
{ int n;

    printf("enter the no.\n");
    printf("enter 1 for AND gate\n");
    printf("enter 2 for OR gate\n");
    printf("enter 3 for NOT gate\n");
    printf("enter 4 for NAND gate\n");
    printf("enter 5 for NOR gate\n");
    printf("enter 6 for EXNOR gate\n");
    printf("enter 7 for EXOR gate\n");
    scanf("%d",&n);
    
    switch(n){
        case 1:
        AND();
        break;
        
        case 2:
        OR();
        break;
        
        case 3:
        NOT();
        break;
        
        case 4:
        NAND();
        break;
        
        case 5:
        NOR();
        break;
        
        case 6:
        EXNOR();
        break;
        
        case 7:
        EXOR();
        break;
        
        default:
        printf("invalid choice");
        break;
        
        
        
        
    }

    return 0;
}
