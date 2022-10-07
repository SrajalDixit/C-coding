#include <stdio.h>
void main()

{
    int array[100],i,index,value,temp;


  printf("Enter array:");


    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }

      for(i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }

    printf("Enter value and Index:",&value,&index);

    scanf("%d%d");
    

    
    for(i=5;i>=index-1;i--)
    {
        array[i+1]=array[i];

        
    }
     array[index-1]=value;
         for(i=0;i<=5;i++)
    {
        printf("%d\t",array[i]);
    }
    
}
