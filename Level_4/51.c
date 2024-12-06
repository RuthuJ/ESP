/* Question:  Write a program to create a queue using linked list.  Use add and  
   remove. Add will insert the entry in top of the list. Remove will get  
   bottom of the list and display. Display will show from top to bottom.  
 
    Menu Items 
 
    1. Add 
    2. Remove 
    3. Display Stack 
    4. Exit */

    #include <stdio.h>
#include <stdlib.h>

// Define the structure for the queue node
struct QueueNode {
    int data;
    struct QueueNode* next;
};

// Function to create a new queue node
struct QueueNode* createNode(int data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Add operation: Insert element at the end (tail) of the queue
void add(struct QueueNode** front, struct QueueNode** rear, int data) {
    struct QueueNode* newNode = createNode(data);
    if (*rear == NULL) {
        // If the queue is empty, both front and rear point to the new node
        *front = *rear = newNode;
    } else {
        // Insert the new node at the end and update the rear pointer
        (*rear)->next = newNode;
        *rear = newNode;
    }
    printf("Added %d to the queue.\n", data);
}

// Remove operation: Remove element from the front of the queue
int removeNode(struct QueueNode** front, struct QueueNode** rear) {
    if (*front == NULL) {
        printf("Queue underflow! The queue is empty.\n");
        return -1; // Return a sentinel value indicating queue underflow
    }
    struct QueueNode* temp = *front;
    int removedData = temp->data;
    *front = (*front)->next;

    if (*front == NULL) {
        // If the queue becomes empty, set the rear to NULL as well
        *rear = NULL;
    }

    free(temp); // Free the memory of the removed node
    return removedData;
}

// Display operation: Show the queue from front to rear
void display(struct QueueNode* front) {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue (front to rear): ");
    struct QueueNode* temp = front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function with menu to interact with the queue
int main() {
    struct QueueNode* front = NULL; // Initialize front of the queue
    struct QueueNode* rear = NULL;  // Initialize rear of the queue
    int choice, data;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Remove\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to add to the queue: ");
                scanf("%d", &data);
                add(&front, &rear, data);
                break;

            case 2:
                data = removeNode(&front, &rear);
                if (data != -1) {
                    printf("Removed value: %d\n", data);
                }
                break;

            case 3:
                display(front);
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

