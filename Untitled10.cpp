#include <stdio.h>

int main() {
    float total_amount, discount = 0, final_amount;

    printf("Enter total purchase amount: ");
    scanf("%f", &total_amount);

    if (total_amount >= 5000) {
        discount = total_amount * 0.20;
    } 
    else if (total_amount >= 3000) {
        discount = total_amount * 0.10;
    } 
    else {
        discount = 0;
    }

    final_amount = total_amount - discount;

    printf("\n--- Receipt ---\n");
    printf("Original Amount: %.2f\n", total_amount);
    printf("Discount Applied: %.2f\n", discount);
    printf("Final Payable: %.2f\n", final_amount);

    return 0;
}
