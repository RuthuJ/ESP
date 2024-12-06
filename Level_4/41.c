/*Question:    Get a string and a character from the user and find all the positions  
where the character present and print it. 
E.g.: string : hellosurabee 
character : e 
Answer : 2, 11, 12 */

#include <stdio.h>

void findCharacterPositions(char str[], char ch) {
    int i = 0, found = 0;

    printf("Positions of '%c' in the string: ", ch);

    // Traverse the string
    while (str[i] != '\0') {
        if (str[i] == ch) {
            printf("%d ", i + 1); // Print the position (1-based index)
            found = 1;
        }
        i++;
    }

    // If no occurrence found
    if (!found) {
        printf("Character '%c' not found in the string.", ch);
    }
    printf("\n");
}

int main() {
    char str[101], ch;

    // Input string
    printf("Enter a string (up to 100 characters): ");
    scanf("%100s", str);

    // Input character
    printf("Enter a character to search for: ");
    scanf(" %c", &ch); // Notice the space before %c to consume leftover newline

    // Find and print positions
    findCharacterPositions(str, ch);

    return 0;
}
