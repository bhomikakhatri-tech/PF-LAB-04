#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("--- Math Operations Console ---\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Square\n6. Cube\n7. Square Root\n8. Power (x^y)\n");
    printf("9. Absolute Value\n10. Modulus\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 8:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (choice == 1) result = num1 + num2;
            else if (choice == 2) result = num1 - num2;
            else if (choice == 3) result = num1 * num2;
            else if (choice == 4) {
                if (num2 != 0) result = num1 / num2;
                else printf("Error: Division by zero\n");
            }
            else result = pow(num1, num2);
            
            if (!(choice == 4 && num2 == 0)) printf("Result: %.2f\n", result);
            break;

        case 5:
        case 6:
        case 7:
        case 9:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (choice == 5) result = num1 * num1;
            else if (choice == 6) result = num1 * num1 * num1;
            else if (choice == 7) {
                if (num1 >= 0) result = sqrt(num1);
                else printf("Error: Negative square root\n");
            }
            else result = fabs(num1);
            
            if (!(choice == 7 && num1 < 0)) printf("Result: %.2f\n", result);
            break;

        case 10:
            printf("Enter two integers for modulus: ");
            int n1, n2;
            scanf("%d %d", &n1, &n2);
            if (n2 != 0) {
                printf("Result: %d\n", n1 % n2);
            } else {
                printf("Error: Modulus by zero\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
