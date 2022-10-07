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

    printf("Enter Index which has to be deleted:",&index);

    scanf("%d");
    

    
    for(i=index-1;i<5;i++)
    {
        array[i]=array[i+1];

        
    }
     
         for(i=0;i<4;i++)
    {
        printf("%d\t",array[i]);
    }
    
}
