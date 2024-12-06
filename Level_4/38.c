/*Question:    Adjust the carry in an integer array. (i.e. convert the 2 digit number  
into single digit and add the carry to the next number) 
E.g.:    Array - 6 12 3 15 7 
Answer: 7   2 4   5 7*/

#include <stdio.h>

void adjustCarry(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        arr[i - 1] += arr[i] / 10; // Add the carry from the current element to the previous one
        arr[i] %= 10;              // Retain only the last digit in the current element
    }
}

int main() {
    int size;

    // Prompt user to input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the array elements
    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Adjust the carry
    adjustCarry(arr, size);

    // Print the adjusted array
    printf("Adjusted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
