
#include <stdio.h>

int main() {
    int choice;
    float a, b, result;
    START:
    printf("\n===== MENU DRIVEN CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
if (choice == 5) {
        printf("Exiting...\n");
        return 0;}
        printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
switch (choice) {
        case 1:
            result = a + b;
            printf("Result = %.2f\n", result);
            break; case 2:
            result = a - b;
            printf("Result = %.2f\n", result);
            break; case 3:
            result = a * b;
            printf("Result = %.2f\n", result);
            break; case 4:
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero!\n");
                goto START;   // go back to menu
            }
            printf("Result = %.2f\n", result);
            break;

        default:
            printf("Invalid choice! Please try again.\n");
            goto START;   // go back to menu
    }
    goto START;   // repeat calculator
 return 0;
}
