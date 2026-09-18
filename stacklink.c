#include <stdio.h>
#include <stdlib.h>

 
struct Node {
    int data;
    struct Node* next;
};

 
struct Node* top = NULL;

// 1. Push Operation: Add element to the top
void push(int value) {
  
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    
    if (newNode == NULL) {
        printf("Heap Overflow! Cannot push %d\n", value);
        return;
    }
    
    newNode->data = value;
    newNode->next = top;  
    top = newNode;        
    printf("%d pushed into stack\n", value);
}

// 2. Pop Operation: Remove element from the top
void pop() {
   
    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    
    struct Node* temp = top; 
    printf("%d popped from stack\n", top->data);
    
    top = top->next;          
    free(temp);              
}

// 3. Display Operation
void display() {
    if (top == NULL) {
        printf("Stack is Empty\n");
        return;
    }
    
    struct Node* temp = top;
    printf("Stack Elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();
    pop();

    display();

    return 0;
}

