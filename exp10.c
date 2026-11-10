
#include <stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;

void typeCharacter(char ch)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top] = ch;
    }
}

void undo()
{
    if (top == -1)
    {
        printf("Nothing to undo!\n");
    }
    else
    {
        top--;
    }
}

void display()
{
    int i;

    printf("Current Text: ");

    for (i = 0; i <= top; i++)
    {
        printf("%c", stack[i]);
    }

    printf("\n");
}

int main()
{
    int choice;
    char ch;

    while (1)
    {
        printf("\n1. Type Character");
        printf("\n2. Undo");
        printf("\n3. Display Text");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter character: ");
                scanf(" %c", &ch);
                typeCharacter(ch);
                display();
                break;

            case 2:
                undo();
                display();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
