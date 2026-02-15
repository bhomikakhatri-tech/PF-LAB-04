#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    float total, percentage;

    printf("Enter marks for 5 subjects (0-100):\n");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5.0;

    printf("\nTotal Marks: %.2f", total);
    printf("\nPercentage: %.2f%%\n", percentage);

    printf("Result: ");
    if (percentage >= 85) {
        printf("Full Scholarship\n");
    } 
    else if (percentage >= 70) {
        printf("Partial Scholarship\n");
    } 
    else if (percentage >= 50) {
        printf("Eligible for Consideration\n");
    } 
    else {
        printf("Not Eligible\n");
    }

    return 0;
}
