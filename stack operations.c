#include<stdio.h>
#include<stdlib.h>
#define maxsize 10

struct stack
{
    int top;
    int data[maxsize];
}S;

void initialize()
{
    S.top=-1;
}
int isEmpty()
{
    return S.top=-1;
}
int push(int x)
{
    if(S.top==maxsize-1)
    {
        printf("overflow");
        return-1;
    }
    S.top++;
    S.data[S.top]=x;
    return 1;
}
 int pop()
 {
     if(S.top==0){
     printf("stack underflow ");
     
     }
 
 S.top--;

 return S.data[S.top+1];
  
 }
 int peek()
 {
     int x;
     x =S.data[S.top];
     return x;
 }
 void show()
 {
     
     if(isEmpty())
     printf("\n");
 
     for(int i=S.top;i>=0;i--)
     {
         printf("%d",S.data[i]);
     }
 }
 int main()
 {
     int choice,x,y,z;
     while(1)
     {
         printf("\n operations performed by stack");
         printf("\n1.push\n2.pop\n3.Top\n4.End");
         scanf("%d",&choice);
         switch(choice)
         {
             case 1:
             printf("enter the elment");
             scanf("%d",&x);
             push(x);
             break;
             
             case 2:
             z=peek();
             printf("popped element is %d",pop());
             break;
             
             case 3:
             printf("top element is %d",peek());
             
             case 4:
             exit(0);
             default:
             printf("Invalid choice");
             
         }
         
     }
     return 0;
 }
 
 
