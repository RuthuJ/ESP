/*Question:    Get a string using gets function and count all the words in it. 
E.g.: string : Welcome to ECEN Academy 
Answer : 4 */

#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int count = 0, i = 0;
    int inWord = 0; // Flag to check if inside a word

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                count++;   // Found the beginning of a word
                inWord = 1;
            }
        } else {
            inWord = 0; // End of a word
        }
        i++;
    }

    return count;
}

int main() {
    char str[201];

    // Input string using gets
    printf("Enter a string (up to 200 characters): ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end (if any)
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Count words and print the result
    int wordCount = countWords(str);
    printf("The number of words in the string: %d\n", wordCount);

    return 0;
}
