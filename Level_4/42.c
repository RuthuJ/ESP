/*Question:    Get a main string and sub string. Check the sub string in main string  
an print the position. 
E.g.: string : hellosurabee 
substring : sura 
Answer : 6 */

#include <stdio.h>

int findSubstringPosition(char mainStr[], char subStr[]) {
    int i = 0, j = 0, start;

    while (mainStr[i] != '\0') {
        if (mainStr[i] == subStr[j]) { // Match found, start checking substring
            start = i; 
            while (mainStr[i] == subStr[j] && subStr[j] != '\0') {
                i++;
                j++;
            }

            if (subStr[j] == '\0') {
                return start + 1; // Return 1-based index
            }

            i = start; // Reset i to the start for next iteration
            j = 0;     // Reset j to start of substring
        }
        i++;
    }

    return -1; // Substring not found
}

int main() {
    char mainStr[101], subStr[51];

    // Input main string
    printf("Enter the main string (up to 100 characters): ");
    scanf("%100s", mainStr);

    // Input substring
    printf("Enter the substring (up to 50 characters): ");
    scanf("%50s", subStr);

    // Find and print substring position
    int position = findSubstringPosition(mainStr, subStr);

    if (position != -1) {
        printf("The substring starts at position: %d\n", position);
    } else {
        printf("Substring not found in the main string.\n");
    }

    return 0;
}
