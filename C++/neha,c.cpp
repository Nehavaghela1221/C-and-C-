#include <stdio.h>

int main() {
    char str[100];
    int count = 0, inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a whitespace character
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }

    // Remove the newline character if present
    if (str[0] != '\n') {
        if (str[0] == '\0') {
            count = 0;
        }
    }

    printf("Total number of words: %d\n", count);

    return 0;
}
