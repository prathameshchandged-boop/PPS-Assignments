#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, choice;

    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    do {
        printf("\n--- Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Result: %d\n", num1 + num2);
                break;
            case 2:
                printf("Result: %d\n", num1 - num2);
                break;
            case 3:
                printf("Result: %d\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %d\n", num1 / num2);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            case 5:
                printf("\nThank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 5);

    return 0;
}
