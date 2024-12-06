/*Question:  Create a link list for the following structure and get user inputs of  
id, Maths mark, Science Mark. Once the user inputs id as -1 exit the  
input mode and display all the entries. */

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

// Main function
int main() {
    struct Student* head = NULL;
    struct Student* temp = NULL;
    int id, mathsMark, scienceMark;

    while (1) {
        // Get user input for student details
        printf("Enter Student ID (or -1 to stop): ");
        scanf("%d", &id);

        if (id == -1) {
            break;  // Exit input mode
        }

        printf("Enter Maths Mark: ");
        scanf("%d", &mathsMark);
        printf("Enter Science Mark: ");
        scanf("%d", &scienceMark);

        // Create a new student node
        struct Student* newStudent = createStudent(id, mathsMark, scienceMark);

        // If the list is empty, make the new student the head
        if (head == NULL) {
            head = newStudent;
        } else {
            // Otherwise, append the new student to the end of the list
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newStudent;
        }
    }

    // Display all the student records
    printf("\nStudent Records:\n");
    displayList(head);

    return 0;
}
