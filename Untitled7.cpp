#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00;
    float amount;

    printf("--- ATM Banking System ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    
    // Basic error handling for non-integer inputs could be added here
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nCurrent Balance: $%.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            
            if (amount > balance) {
                printf("Transaction Failed: Insufficient funds.\n");
            } else if (amount <= 0) {
                printf("Transaction Failed: Invalid amount.\n");
            } else {
                balance -= amount;
                printf("Withdrawal successful. New Balance: $%.2f\n", balance);
            }
            break;

        case 3:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            
            if (amount > 0) {
                balance += amount;
                printf("Deposit successful. New Balance: $%.2f\n", balance);
            } else {
                printf("Transaction Failed: Invalid deposit amount.\n");
            }
            break;

        case 4:
            printf("Exiting system. Have a nice day!\n");
            break;

        default:
            printf("Invalid choice. Please restart the program.\n");
    }

    return 0;
}
