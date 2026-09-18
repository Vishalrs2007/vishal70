#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;

//push operation
void push(int value)
{
if(top ==MAX - 1)
{
printf("Stack OverFlow\n");
}
else{
top++;
stack[top]= value;
printf("%d pushed into stack\n",value);
}
}

//pop operation
void pop()
{
if(top == -1)
{
printf("Stack Underflow\n");
}
else
{
printf("%d popped from stack\n",stack[top]);
top--;
}
}
//display operation
void display()
{
if(top == -1){
printf("Stack is Empty\n");
}
else
{
printf("Stack Elements:\n");
for(int i = top; i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}
int main()
{
push(10);
push(20);
push(30);

display();

pop();
pop();

display ();

return 0;
}
