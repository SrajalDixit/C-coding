#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void insert();
void delete();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
int main()
{
    int choice;
    while(1)
    {
        printf("1.insert element to queue\n");
        printf("2.Delete element from queue\n");
        printf("3.Display all elements of queue\n");
        printf("4.quit\n");
        printf("enter your choice\n");
       scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            
            case 2:
            delete();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(1);
            
            default:
            printf("wrong choice\n");
            
            
            }
    }
}

void insert()
{
    int item;
    if(rear==MAX-1)
    printf("queue overflow\n");
    else {
        if(front==-1)
        front++;
        printf("insert the element in queue\n");
        scanf("%d",&item);
        rear=rear+1;
        queue_array[rear]=item;
        
    }
}

void delete()
{
    
        printf("element deleted from queue is %d\n",queue_array[front]);
        front=front+1;
    
}
void display()
{
    int i;
    if(front==-1)
    printf("queue is empty\n");
    else{
        printf("queue is\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\t",queue_array[i]);
            
        }
        printf("\n");
        
    }
}
