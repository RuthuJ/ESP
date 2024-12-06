/* 
 Question:  Create a sample linked list with about 5 entries using the following  
   structure.  Insert a new entry before or after a given id. Delete an 
   entry of a given id. 
 
    Menu Items 
 
    1. Insert Entry 
    2. Delete Entry 
    3. Display List
    4. Exit*/

    #include <stdio.h>
#include <stdlib.h>

// Define the structure for a student record
struct Student {
    int id;
    int mathsMark;
    int scienceMark;
    struct Student* next;
};

// Function to create a new student node
struct Student* createStudent(int id, int mathsMark, int scienceMark) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    newStudent->id = id;
    newStudent->mathsMark = mathsMark;
    newStudent->scienceMark = scienceMark;
    newStudent->next = NULL;
    return newStudent;
}

// Function to display all the student records
void displayList(struct Student* head) {
    struct Student* temp = head;
    if (temp == NULL) {
        printf("No records available.\n");
        return;
    }

    printf("ID\tMaths\tScience\n");
    while (temp != NULL) {
        printf("%d\t%d\t%d\n", temp->id, temp->mathsMark, temp->scienceMark);
        temp = temp->next;
    }
}

// Function to insert a new entry before a given id
void insertBefore(struct Student** head, int id, int newId, int mathsMark, int scienceMark) {
    struct Student* temp = *head;
    struct Student* newStudent = createStudent(newId, mathsMark, scienceMark);
    
    // If the first node is the one to be inserted before
    if (temp != NULL && temp->id == id) {
        newStudent->next = temp;
        *head = newStudent;
        return;
    }

    // Traverse to find the node before the given id
    while (temp != NULL && temp->next != NULL && temp->next->id != id) {
        temp = temp->next;
    }

    // If the node with the given id is found
    if (temp != NULL && temp->next != NULL && temp->next->id == id) {
        newStudent->next = temp->next;
        temp->next = newStudent;
    } else {
        printf("ID %d not found.\n", id);
    }
}

// Function to insert a new entry after a given id
void insertAfter(struct Student* head, int id, int newId, int mathsMark, int scienceMark) {
    struct Student* temp = head;
    struct Student* newStudent = createStudent(newId, mathsMark, scienceMark);
    
    // Traverse the list to find the node with the given id
    while (temp != NULL) {
        if (temp->id == id) {
            newStudent->next = temp->next;
            temp->next = newStudent;
            return;
        }
        temp = temp->next;
    }
    
    printf("ID %d not found.\n", id);
}

// Function to delete a student entry by ID
void deleteEntry(struct Student** head, int id) {
    struct Student* temp = *head;
    struct Student* prev = NULL;

    // If the head node itself holds the ID to be deleted
    if (temp != NULL && temp->id == id) {
        *head = temp->next;
        free(temp);
        printf("Student with ID %d deleted.\n", id);
        return;
    }

    // Search for the student to be deleted
    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    // If the ID is not found
    if (temp == NULL) {
        printf("ID %d not found.\n", id);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp);
    printf("Student with ID %d deleted.\n", id);
}

// Main function with menu
int main() {
    struct Student* head = NULL;
    struct Student* temp;

    // Create a sample list with 5 entries
    head = createStudent(101, 80, 90);
    head->next = createStudent(102, 85, 92);
    head->next->next = createStudent(103, 88, 95);
    head->next->next->next = createStudent(104, 78, 85);
    head->next->next->next->next = createStudent(105, 90, 96);

    int choice, id, newId, mathsMark, scienceMark;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Entry\n");
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the ID of the student to insert before or after: ");
                scanf("%d", &id);
                printf("Enter the new student ID: ");
                scanf("%d", &newId);
                printf("Enter the Maths Mark: ");
                scanf("%d", &mathsMark);
                printf("Enter the Science Mark: ");
                scanf("%d", &scienceMark);
                
                printf("Do you want to insert before (1) or after (2)? ");
                int insertChoice;
                scanf("%d", &insertChoice);
                
                if (insertChoice == 1) {
                    insertBefore(&head, id, newId, mathsMark, scienceMark);
                } else if (insertChoice == 2) {
                    insertAfter(head, id, newId, mathsMark, scienceMark);
                } else {
                    printf("Invalid choice.\n");
                }
                break;

            case 2:
                printf("Enter the ID of the student to delete: ");
                scanf("%d", &id);
                deleteEntry(&head, id);
                break;

            case 3:
                displayList(head);
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    }

    return 0;
}
