/* 
 Question:  Write a program create a stack using linked list.  Use push & Pop. Push 
   will insert the entry in top of the list. Pop will get top of the list and  
   display. Display will show from top to bottom.  
 
    Menu Items 
 
    1. Push 
    2. Pop 
    3. Display Stack 
    4. Exit */

    #include <stdio.h>
#include <stdlib.h>

// Define the structure for the stack node
struct StackNode {
    int data;
    struct StackNode* next;
};

// Function to create a new stack node
struct StackNode* createNode(int data) {
    struct StackNode* newNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Push operation: Insert element at the top of the stack
void push(struct StackNode** top, int data) {
    struct StackNode* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d onto stack.\n", data);
}

// Pop operation: Remove the top element and return it
int pop(struct StackNode** top) {
    if (*top == NULL) {
        printf("Stack underflow! The stack is empty.\n");
        return -1; // Return a sentinel value indicating stack underflow
    }
    struct StackNode* temp = *top;
    int poppedData = temp->data;
    *top = (*top)->next;  // Move the top to the next node
    free(temp); // Free the memory of the popped node
    return poppedData;
}

// Display operation: Show the stack from top to bottom
void display(struct StackNode* top) {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack (top to bottom): ");
    struct StackNode* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function with menu to interact with the stack
int main() {
    struct StackNode* stack = NULL;  // Initialize an empty stack
    int choice, data;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push onto stack: ");
                scanf("%d", &data);
                push(&stack, data);
                break;

            case 2:
                data = pop(&stack);
                if (data != -1) {
                    printf("Popped value: %d\n", data);
                }
                break;

            case 3:
                display(stack);
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
