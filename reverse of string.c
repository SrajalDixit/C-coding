#include <stdio.h>
#include <string.h>
//int size = 10;
struct stack
{
	char a[20];
	int top;	
}s;
void initialize()
{
	s.top = -1;
}
int isEmpty()
{
	if(s.top == -1)
		return 1;
	return 0;	
}
void push(int n)
{

	if(s.top+1 >= 10)
	{
		printf("Overflow");
		return;
	}
	s.top++;
	s.a[s.top] = n;
}
void pop()
{
	if(s.top == -1)
	{
		printf("Underflow");
		return;
	}
	s.top--;
}
void printStack()
{
	for(int i = s.top; i > 0; i--)
		printf("%c", s.a[i]);
	printf("\n");
}
int peek()
{
	if(s.top == -1)
	{
		printf("Stack is empty");
		return -1;
	}
	return s.a[s.top];		
}
int main()
{
	char str[20];
	printf("Enter a string:");
	scanf("%s", str);
	for(int i = 0; i < strlen(str); i++)
	{
		push(str[i]);
	}
	printStack();
}
