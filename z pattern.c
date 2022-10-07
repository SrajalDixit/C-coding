#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              	                  
	printf("Input number is %d.\n", num);  

	for(int i=0;i<num;i++)
	{
		printf("*");
	}
	int t=num-2;
	int z=num-1;
	
	for(int i=0;i<t;i++)
	{
	    z=num-i-2;
	    printf("\n");
	   
	    for(int j=0;j<z;j++)
	    {
	        printf(" ");
	        
	  }
	  printf("*");
	  
	    
	}
	printf("\n");
	
	for(int i=0;i<num;i++)
	{
		printf("*");
	}
	
	
return 0;	     
}
