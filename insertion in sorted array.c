#include<stdio.h>

void main()
{
    int arr[10],i,temp,index,value;

    printf("Enter array:");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
//bubble sort
    for(i=0;i<5;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
     for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nEnter a no.to be added:\n");
    scanf("%d",&value);
    //function to find index of the input value

    for(i=0;i<=5;i++)
    {
        if(arr[i]<value && value<arr[i+1])
       {

        index=i+2;
        }
        
    }
//shifting of array elements 
   
    for(i=5;i>=index-1;i--)
    {
        arr[i+1]=arr[i];

        
    }

    //putting value on index
     arr[index-1]=value;
         for(i=0;i<=5;i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
