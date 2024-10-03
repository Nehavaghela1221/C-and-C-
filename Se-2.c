#include <stdio.h>

int main() {
    char choice;
    int num1, num2;
    float result; // Use float to handle potential division by zero

    printf("Enter your choice (+, -, *, /): ");
    scanf(" %c", &choice); // Capture only the first character

    // Validate user input (optional but recommended)
    if (choice != '+' && choice != '-' && choice != '*' && choice != '/') {
        printf("Invalid choice. Please enter +, -, *, or /.\n");
        return 1; // Indicate error
    }

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
            } else {
                result = (float)num1 / num2; // Cast to float for division
                printf("%d / %d = %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("Unexpected error.\n"); // Should never be reached due to validation
    }

    return 0;
}

